#pragma once
// IWYU pragma private; include "VYaml/Emitter/ScalarStyle.hpp"
#include "VYaml/Emitter/zzzz__ScalarStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Emitter::ScalarStyle::ScalarStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VYaml::Emitter::ScalarStyle::ScalarStyle()   {
}
constexpr ::VYaml::Emitter::ScalarStyle  VYaml::Emitter::ScalarStyle::Any{static_cast<int32_t>(0x0)};
constexpr ::VYaml::Emitter::ScalarStyle  VYaml::Emitter::ScalarStyle::Plain{static_cast<int32_t>(0x1)};
constexpr ::VYaml::Emitter::ScalarStyle  VYaml::Emitter::ScalarStyle::SingleQuoted{static_cast<int32_t>(0x2)};
constexpr ::VYaml::Emitter::ScalarStyle  VYaml::Emitter::ScalarStyle::DoubleQuoted{static_cast<int32_t>(0x3)};
constexpr ::VYaml::Emitter::ScalarStyle  VYaml::Emitter::ScalarStyle::Literal{static_cast<int32_t>(0x4)};
constexpr ::VYaml::Emitter::ScalarStyle  VYaml::Emitter::ScalarStyle::Folded{static_cast<int32_t>(0x5)};
