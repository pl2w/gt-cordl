#pragma once
// IWYU pragma private; include "System/Net/CommandStream_PipelineEntryFlags.hpp"
#include "System/Net/zzzz__CommandStream_PipelineEntryFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandStream_PipelineEntryFlags::CommandStream_PipelineEntryFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandStream_PipelineEntryFlags::CommandStream_PipelineEntryFlags()   {
}
constexpr ::GlobalNamespace::CommandStream_PipelineEntryFlags  GlobalNamespace::CommandStream_PipelineEntryFlags::UserCommand{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CommandStream_PipelineEntryFlags  GlobalNamespace::CommandStream_PipelineEntryFlags::GiveDataStream{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CommandStream_PipelineEntryFlags  GlobalNamespace::CommandStream_PipelineEntryFlags::CreateDataConnection{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CommandStream_PipelineEntryFlags  GlobalNamespace::CommandStream_PipelineEntryFlags::DontLogParameter{static_cast<int32_t>(0x8)};
