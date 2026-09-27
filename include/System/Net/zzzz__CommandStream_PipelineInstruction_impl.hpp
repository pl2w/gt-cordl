#pragma once
// IWYU pragma private; include "System/Net/CommandStream_PipelineInstruction.hpp"
#include "System/Net/zzzz__CommandStream_PipelineInstruction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandStream_PipelineInstruction::CommandStream_PipelineInstruction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandStream_PipelineInstruction::CommandStream_PipelineInstruction()   {
}
constexpr ::GlobalNamespace::CommandStream_PipelineInstruction  GlobalNamespace::CommandStream_PipelineInstruction::Abort{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CommandStream_PipelineInstruction  GlobalNamespace::CommandStream_PipelineInstruction::Advance{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CommandStream_PipelineInstruction  GlobalNamespace::CommandStream_PipelineInstruction::Pause{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CommandStream_PipelineInstruction  GlobalNamespace::CommandStream_PipelineInstruction::Reread{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CommandStream_PipelineInstruction  GlobalNamespace::CommandStream_PipelineInstruction::GiveStream{static_cast<int32_t>(0x4)};
