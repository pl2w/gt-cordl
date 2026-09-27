#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignal_EmitMode.hpp"
#include "GlobalNamespace/zzzz__GTSignal_EmitMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTSignal_EmitMode::GTSignal_EmitMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTSignal_EmitMode::GTSignal_EmitMode()   {
}
constexpr ::GlobalNamespace::GTSignal_EmitMode  GlobalNamespace::GTSignal_EmitMode::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::GTSignal_EmitMode  GlobalNamespace::GTSignal_EmitMode::Others{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTSignal_EmitMode  GlobalNamespace::GTSignal_EmitMode::Targets{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTSignal_EmitMode  GlobalNamespace::GTSignal_EmitMode::All{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTSignal_EmitMode  GlobalNamespace::GTSignal_EmitMode::Host{static_cast<int32_t>(0x3)};
