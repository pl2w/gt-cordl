#pragma once
// IWYU pragma private; include "VYaml/Parser/TokenType.hpp"
#include "VYaml/Parser/zzzz__TokenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Parser::TokenType::TokenType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VYaml::Parser::TokenType::TokenType()   {
}
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::None{static_cast<uint8_t>(0x0u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::StreamStart{static_cast<uint8_t>(0x1u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::StreamEnd{static_cast<uint8_t>(0x2u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::VersionDirective{static_cast<uint8_t>(0x3u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::TagDirective{static_cast<uint8_t>(0x4u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::DocumentStart{static_cast<uint8_t>(0x5u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::DocumentEnd{static_cast<uint8_t>(0x6u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::BlockSequenceStart{static_cast<uint8_t>(0x7u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::BlockMappingStart{static_cast<uint8_t>(0x8u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::BlockEnd{static_cast<uint8_t>(0x9u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::FlowSequenceStart{static_cast<uint8_t>(0xau)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::FlowSequenceEnd{static_cast<uint8_t>(0xbu)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::FlowMappingStart{static_cast<uint8_t>(0xcu)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::FlowMappingEnd{static_cast<uint8_t>(0xdu)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::BlockEntryStart{static_cast<uint8_t>(0xeu)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::FlowEntryStart{static_cast<uint8_t>(0xfu)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::KeyStart{static_cast<uint8_t>(0x10u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::ValueStart{static_cast<uint8_t>(0x11u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::Alias{static_cast<uint8_t>(0x12u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::Anchor{static_cast<uint8_t>(0x13u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::Tag{static_cast<uint8_t>(0x14u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::PlainScalar{static_cast<uint8_t>(0x15u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::SingleQuotedScaler{static_cast<uint8_t>(0x16u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::DoubleQuotedScaler{static_cast<uint8_t>(0x17u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::LiteralScalar{static_cast<uint8_t>(0x18u)};
constexpr ::VYaml::Parser::TokenType  VYaml::Parser::TokenType::FoldedScalar{static_cast<uint8_t>(0x19u)};
