#pragma once
// IWYU pragma private; include "VYaml/Parser/ParseEventType.hpp"
#include "VYaml/Parser/zzzz__ParseEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Parser::ParseEventType::ParseEventType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VYaml::Parser::ParseEventType::ParseEventType()   {
}
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::Nothing{static_cast<uint8_t>(0x0u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::StreamStart{static_cast<uint8_t>(0x1u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::StreamEnd{static_cast<uint8_t>(0x2u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::DocumentStart{static_cast<uint8_t>(0x3u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::DocumentEnd{static_cast<uint8_t>(0x4u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::Alias{static_cast<uint8_t>(0x5u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::Scalar{static_cast<uint8_t>(0x6u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::SequenceStart{static_cast<uint8_t>(0x7u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::SequenceEnd{static_cast<uint8_t>(0x8u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::MappingStart{static_cast<uint8_t>(0x9u)};
constexpr ::VYaml::Parser::ParseEventType  VYaml::Parser::ParseEventType::MappingEnd{static_cast<uint8_t>(0xau)};
