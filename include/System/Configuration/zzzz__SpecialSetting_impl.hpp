#pragma once
// IWYU pragma private; include "System/Configuration/SpecialSetting.hpp"
#include "System/Configuration/zzzz__SpecialSetting_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Configuration::SpecialSetting::SpecialSetting(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Configuration::SpecialSetting::SpecialSetting()   {
}
constexpr ::System::Configuration::SpecialSetting  System::Configuration::SpecialSetting::ConnectionString{static_cast<int32_t>(0x0)};
constexpr ::System::Configuration::SpecialSetting  System::Configuration::SpecialSetting::WebServiceUrl{static_cast<int32_t>(0x1)};
