#pragma once
// IWYU pragma private; include "System/Configuration/SettingsSerializeAs.hpp"
#include "System/Configuration/zzzz__SettingsSerializeAs_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Configuration::SettingsSerializeAs::SettingsSerializeAs(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsSerializeAs::SettingsSerializeAs()   {
}
constexpr ::System::Configuration::SettingsSerializeAs  System::Configuration::SettingsSerializeAs::Binary{static_cast<int32_t>(0x2)};
constexpr ::System::Configuration::SettingsSerializeAs  System::Configuration::SettingsSerializeAs::ProviderSpecific{static_cast<int32_t>(0x3)};
constexpr ::System::Configuration::SettingsSerializeAs  System::Configuration::SettingsSerializeAs::String{static_cast<int32_t>(0x0)};
constexpr ::System::Configuration::SettingsSerializeAs  System::Configuration::SettingsSerializeAs::Xml{static_cast<int32_t>(0x1)};
