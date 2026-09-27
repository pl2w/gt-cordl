#pragma once
// IWYU pragma private; include "GlobalNamespace/EGetPermissionsStatus.hpp"
#include "GlobalNamespace/zzzz__EGetPermissionsStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EGetPermissionsStatus::EGetPermissionsStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EGetPermissionsStatus::EGetPermissionsStatus()   {
}
constexpr ::GlobalNamespace::EGetPermissionsStatus  GlobalNamespace::EGetPermissionsStatus::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EGetPermissionsStatus  GlobalNamespace::EGetPermissionsStatus::GetPermission{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EGetPermissionsStatus  GlobalNamespace::EGetPermissionsStatus::RequestingPermission{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EGetPermissionsStatus  GlobalNamespace::EGetPermissionsStatus::RequestedPermission{static_cast<int32_t>(0x3)};
