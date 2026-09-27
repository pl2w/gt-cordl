#pragma once
// IWYU pragma private; include "System/Configuration/SettingsManageability.hpp"
#include "System/Configuration/zzzz__SettingsManageability_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Configuration::SettingsManageability::SettingsManageability(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsManageability::SettingsManageability()   {
}
constexpr ::System::Configuration::SettingsManageability  System::Configuration::SettingsManageability::Roaming{static_cast<int32_t>(0x0)};
