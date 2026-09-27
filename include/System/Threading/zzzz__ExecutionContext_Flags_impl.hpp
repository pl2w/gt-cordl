#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext_Flags.hpp"
#include "System/Threading/zzzz__ExecutionContext_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ExecutionContext_Flags::ExecutionContext_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExecutionContext_Flags::ExecutionContext_Flags()   {
}
constexpr ::GlobalNamespace::ExecutionContext_Flags  GlobalNamespace::ExecutionContext_Flags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ExecutionContext_Flags  GlobalNamespace::ExecutionContext_Flags::IsNewCapture{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ExecutionContext_Flags  GlobalNamespace::ExecutionContext_Flags::IsFlowSuppressed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ExecutionContext_Flags  GlobalNamespace::ExecutionContext_Flags::IsPreAllocatedDefault{static_cast<int32_t>(0x4)};
