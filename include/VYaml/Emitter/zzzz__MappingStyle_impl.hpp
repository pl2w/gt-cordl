#pragma once
// IWYU pragma private; include "VYaml/Emitter/MappingStyle.hpp"
#include "VYaml/Emitter/zzzz__MappingStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Emitter::MappingStyle::MappingStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VYaml::Emitter::MappingStyle::MappingStyle()   {
}
constexpr ::VYaml::Emitter::MappingStyle  VYaml::Emitter::MappingStyle::Block{static_cast<int32_t>(0x0)};
constexpr ::VYaml::Emitter::MappingStyle  VYaml::Emitter::MappingStyle::Flow{static_cast<int32_t>(0x1)};
