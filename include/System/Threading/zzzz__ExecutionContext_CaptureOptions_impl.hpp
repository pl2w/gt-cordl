#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext_CaptureOptions.hpp"
#include "System/Threading/zzzz__ExecutionContext_CaptureOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ExecutionContext_CaptureOptions::ExecutionContext_CaptureOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExecutionContext_CaptureOptions::ExecutionContext_CaptureOptions()   {
}
constexpr ::GlobalNamespace::ExecutionContext_CaptureOptions  GlobalNamespace::ExecutionContext_CaptureOptions::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ExecutionContext_CaptureOptions  GlobalNamespace::ExecutionContext_CaptureOptions::IgnoreSyncCtx{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ExecutionContext_CaptureOptions  GlobalNamespace::ExecutionContext_CaptureOptions::OptimizeDefaultCase{static_cast<int32_t>(0x2)};
