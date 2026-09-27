#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_GlobalState.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_OngoingAccountSelection_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_UserData_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_GlobalState_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserChange_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_UserData_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "pairingStateVersion", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastUserId", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allUserCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allPairedDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allLostDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allUsers", ty: "::ArrayW<::UnityEngine::InputSystem::Users::InputUser>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allUserData", ty: "::ArrayW<::GlobalNamespace::InputUser_UserData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allPairedDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allLostDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ongoingAccountSelections", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputUser_OngoingAccountSelection>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onPreFilterUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actionChangeDelegate", ty: "::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onDeviceChangeDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onEventDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onActionChangeHooked", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onDeviceChangeHooked", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onEventHooked", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "listenForUnpairedDeviceActivity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputUser_GlobalState::InputUser_GlobalState(int32_t  pairingStateVersion, uint32_t  lastUserId, int32_t  allUserCount, int32_t  allPairedDeviceCount, int32_t  allLostDeviceCount, ::ArrayW<::UnityEngine::InputSystem::Users::InputUser>  allUsers, ::ArrayW<::GlobalNamespace::InputUser_UserData>  allUserData, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  allPairedDevices, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  allLostDevices, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputUser_OngoingAccountSelection>  ongoingAccountSelections, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>  onChange, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  onUnpairedDeviceUsed, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>  onPreFilterUnpairedDeviceUsed, ::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  actionChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  onDeviceChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  onEventDelegate, bool  onActionChangeHooked, bool  onDeviceChangeHooked, bool  onEventHooked, int32_t  listenForUnpairedDeviceActivity) noexcept  {
this->pairingStateVersion = pairingStateVersion;
this->lastUserId = lastUserId;
this->allUserCount = allUserCount;
this->allPairedDeviceCount = allPairedDeviceCount;
this->allLostDeviceCount = allLostDeviceCount;
this->allUsers = allUsers;
this->allUserData = allUserData;
this->allPairedDevices = allPairedDevices;
this->allLostDevices = allLostDevices;
this->ongoingAccountSelections = ongoingAccountSelections;
this->onChange = onChange;
this->onUnpairedDeviceUsed = onUnpairedDeviceUsed;
this->onPreFilterUnpairedDeviceUsed = onPreFilterUnpairedDeviceUsed;
this->actionChangeDelegate = actionChangeDelegate;
this->onDeviceChangeDelegate = onDeviceChangeDelegate;
this->onEventDelegate = onEventDelegate;
this->onActionChangeHooked = onActionChangeHooked;
this->onDeviceChangeHooked = onDeviceChangeHooked;
this->onEventHooked = onEventHooked;
this->listenForUnpairedDeviceActivity = listenForUnpairedDeviceActivity;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputUser_GlobalState::InputUser_GlobalState()   {
}
