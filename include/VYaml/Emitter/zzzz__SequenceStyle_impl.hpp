#pragma once
// IWYU pragma private; include "VYaml/Emitter/SequenceStyle.hpp"
#include "VYaml/Emitter/zzzz__SequenceStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Emitter::SequenceStyle::SequenceStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VYaml::Emitter::SequenceStyle::SequenceStyle()   {
}
constexpr ::VYaml::Emitter::SequenceStyle  VYaml::Emitter::SequenceStyle::Block{static_cast<int32_t>(0x0)};
constexpr ::VYaml::Emitter::SequenceStyle  VYaml::Emitter::SequenceStyle::Flow{static_cast<int32_t>(0x1)};
