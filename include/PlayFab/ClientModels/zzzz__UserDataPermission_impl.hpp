#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserDataPermission.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataPermission_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::UserDataPermission::UserDataPermission(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserDataPermission::UserDataPermission()   {
}
constexpr ::PlayFab::ClientModels::UserDataPermission  PlayFab::ClientModels::UserDataPermission::Private{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::UserDataPermission  PlayFab::ClientModels::UserDataPermission::Public{static_cast<int32_t>(0x1)};
