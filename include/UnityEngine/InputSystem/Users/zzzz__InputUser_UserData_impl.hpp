#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_UserData.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_UserFlags_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_UserData_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "platformUserAccountName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "platformUserAccountId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actions", ty: "::UnityEngine::InputSystem::IInputActionCollection*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlScheme", ty: "::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlSchemeMatch", ty: "::GlobalNamespace::InputControlScheme_MatchResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lostDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lostDeviceStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty: "::GlobalNamespace::InputUser_UserFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputUser_UserData::InputUser_UserData(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>  platformUserAccountHandle, ::StringW  platformUserAccountName, ::StringW  platformUserAccountId, int32_t  deviceCount, int32_t  deviceStartIndex, ::UnityEngine::InputSystem::IInputActionCollection*  actions, ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>  controlScheme, ::GlobalNamespace::InputControlScheme_MatchResult  controlSchemeMatch, int32_t  lostDeviceCount, int32_t  lostDeviceStartIndex, ::GlobalNamespace::InputUser_UserFlags  flags) noexcept  {
this->platformUserAccountHandle = platformUserAccountHandle;
this->platformUserAccountName = platformUserAccountName;
this->platformUserAccountId = platformUserAccountId;
this->deviceCount = deviceCount;
this->deviceStartIndex = deviceStartIndex;
this->actions = actions;
this->controlScheme = controlScheme;
this->controlSchemeMatch = controlSchemeMatch;
this->lostDeviceCount = lostDeviceCount;
this->lostDeviceStartIndex = lostDeviceStartIndex;
this->flags = flags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputUser_UserData::InputUser_UserData()   {
}
