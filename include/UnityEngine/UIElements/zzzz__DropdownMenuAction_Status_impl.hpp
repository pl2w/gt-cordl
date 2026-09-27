#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenuAction_Status.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DropdownMenuAction_Status::DropdownMenuAction_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DropdownMenuAction_Status::DropdownMenuAction_Status()   {
}
constexpr ::GlobalNamespace::DropdownMenuAction_Status  GlobalNamespace::DropdownMenuAction_Status::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DropdownMenuAction_Status  GlobalNamespace::DropdownMenuAction_Status::Normal{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DropdownMenuAction_Status  GlobalNamespace::DropdownMenuAction_Status::Disabled{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DropdownMenuAction_Status  GlobalNamespace::DropdownMenuAction_Status::Checked{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::DropdownMenuAction_Status  GlobalNamespace::DropdownMenuAction_Status::Hidden{static_cast<int32_t>(0x8)};
