#pragma once
// IWYU pragma private; include "VYaml/Emitter/EmitState.hpp"
#include "VYaml/Emitter/zzzz__EmitState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Emitter::EmitState::EmitState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VYaml::Emitter::EmitState::EmitState()   {
}
constexpr ::VYaml::Emitter::EmitState  VYaml::Emitter::EmitState::None{static_cast<int32_t>(0x0)};
constexpr ::VYaml::Emitter::EmitState  VYaml::Emitter::EmitState::BlockSequenceEntry{static_cast<int32_t>(0x1)};
constexpr ::VYaml::Emitter::EmitState  VYaml::Emitter::EmitState::BlockMappingKey{static_cast<int32_t>(0x2)};
constexpr ::VYaml::Emitter::EmitState  VYaml::Emitter::EmitState::BlockMappingValue{static_cast<int32_t>(0x3)};
constexpr ::VYaml::Emitter::EmitState  VYaml::Emitter::EmitState::FlowSequenceEntry{static_cast<int32_t>(0x4)};
constexpr ::VYaml::Emitter::EmitState  VYaml::Emitter::EmitState::FlowMappingKey{static_cast<int32_t>(0x5)};
constexpr ::VYaml::Emitter::EmitState  VYaml::Emitter::EmitState::FlowMappingValue{static_cast<int32_t>(0x6)};
