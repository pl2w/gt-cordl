#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager_LoadSceneModelResult.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_LoadSceneModelResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult::OVRSceneManager_LoadSceneModelResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult::OVRSceneManager_LoadSceneModelResult()   {
}
constexpr ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult  GlobalNamespace::OVRSceneManager_LoadSceneModelResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult  GlobalNamespace::OVRSceneManager_LoadSceneModelResult::NoSceneModelToLoad{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult  GlobalNamespace::OVRSceneManager_LoadSceneModelResult::FailureScenePermissionNotGranted{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult  GlobalNamespace::OVRSceneManager_LoadSceneModelResult::FailureUnexpectedError{static_cast<int32_t>(0xfffffffe)};
