#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_UserFlags.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_UserFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputUser_UserFlags::InputUser_UserFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputUser_UserFlags::InputUser_UserFlags()   {
}
constexpr ::GlobalNamespace::InputUser_UserFlags  GlobalNamespace::InputUser_UserFlags::BindToAllDevices{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputUser_UserFlags  GlobalNamespace::InputUser_UserFlags::UserAccountSelectionInProgress{static_cast<int32_t>(0x2)};
