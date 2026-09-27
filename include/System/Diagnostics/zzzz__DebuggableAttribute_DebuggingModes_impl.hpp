#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggableAttribute_DebuggingModes.hpp"
#include "System/Diagnostics/zzzz__DebuggableAttribute_DebuggingModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes::DebuggableAttribute_DebuggingModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes::DebuggableAttribute_DebuggingModes()   {
}
constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes  GlobalNamespace::DebuggableAttribute_DebuggingModes::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes  GlobalNamespace::DebuggableAttribute_DebuggingModes::Default{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes  GlobalNamespace::DebuggableAttribute_DebuggingModes::DisableOptimizations{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes  GlobalNamespace::DebuggableAttribute_DebuggingModes::IgnoreSymbolStoreSequencePoints{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes  GlobalNamespace::DebuggableAttribute_DebuggingModes::EnableEditAndContinue{static_cast<int32_t>(0x4)};
