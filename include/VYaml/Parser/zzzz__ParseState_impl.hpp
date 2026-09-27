#pragma once
// IWYU pragma private; include "VYaml/Parser/ParseState.hpp"
#include "VYaml/Parser/zzzz__ParseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Parser::ParseState::ParseState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VYaml::Parser::ParseState::ParseState()   {
}
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::StreamStart{static_cast<int32_t>(0x0)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::ImplicitDocumentStart{static_cast<int32_t>(0x1)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::DocumentStart{static_cast<int32_t>(0x2)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::DocumentContent{static_cast<int32_t>(0x3)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::DocumentEnd{static_cast<int32_t>(0x4)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::BlockNode{static_cast<int32_t>(0x5)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::BlockSequenceFirstEntry{static_cast<int32_t>(0x6)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::BlockSequenceEntry{static_cast<int32_t>(0x7)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::IndentlessSequenceEntry{static_cast<int32_t>(0x8)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::BlockMappingFirstKey{static_cast<int32_t>(0x9)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::BlockMappingKey{static_cast<int32_t>(0xa)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::BlockMappingValue{static_cast<int32_t>(0xb)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::FlowSequenceFirstEntry{static_cast<int32_t>(0xc)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::FlowSequenceEntry{static_cast<int32_t>(0xd)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::FlowSequenceEntryMappingKey{static_cast<int32_t>(0xe)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::FlowSequenceEntryMappingValue{static_cast<int32_t>(0xf)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::FlowSequenceEntryMappingEnd{static_cast<int32_t>(0x10)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::FlowMappingFirstKey{static_cast<int32_t>(0x11)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::FlowMappingKey{static_cast<int32_t>(0x12)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::FlowMappingValue{static_cast<int32_t>(0x13)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::FlowMappingEmptyValue{static_cast<int32_t>(0x14)};
constexpr ::VYaml::Parser::ParseState  VYaml::Parser::ParseState::End{static_cast<int32_t>(0x15)};
