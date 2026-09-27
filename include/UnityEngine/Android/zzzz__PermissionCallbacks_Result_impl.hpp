#pragma once
// IWYU pragma private; include "UnityEngine/Android/PermissionCallbacks_Result.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PermissionCallbacks_Result::PermissionCallbacks_Result(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PermissionCallbacks_Result::PermissionCallbacks_Result()   {
}
constexpr ::GlobalNamespace::PermissionCallbacks_Result  GlobalNamespace::PermissionCallbacks_Result::Dismissed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PermissionCallbacks_Result  GlobalNamespace::PermissionCallbacks_Result::Granted{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PermissionCallbacks_Result  GlobalNamespace::PermissionCallbacks_Result::Denied{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PermissionCallbacks_Result  GlobalNamespace::PermissionCallbacks_Result::DeniedDontAskAgain{static_cast<int32_t>(0x3)};
