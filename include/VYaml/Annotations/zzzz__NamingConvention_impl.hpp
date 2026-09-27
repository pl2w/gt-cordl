#pragma once
// IWYU pragma private; include "VYaml/Annotations/NamingConvention.hpp"
#include "VYaml/Annotations/zzzz__NamingConvention_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Annotations::NamingConvention::NamingConvention(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VYaml::Annotations::NamingConvention::NamingConvention()   {
}
constexpr ::VYaml::Annotations::NamingConvention  VYaml::Annotations::NamingConvention::LowerCamelCase{static_cast<int32_t>(0x0)};
constexpr ::VYaml::Annotations::NamingConvention  VYaml::Annotations::NamingConvention::UpperCamelCase{static_cast<int32_t>(0x1)};
constexpr ::VYaml::Annotations::NamingConvention  VYaml::Annotations::NamingConvention::SnakeCase{static_cast<int32_t>(0x2)};
constexpr ::VYaml::Annotations::NamingConvention  VYaml::Annotations::NamingConvention::KebabCase{static_cast<int32_t>(0x3)};
