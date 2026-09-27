#pragma once
// IWYU pragma private; include "System/Buffers/ArrayPoolEventSource_BufferAllocatedReason.hpp"
#include "System/Buffers/zzzz__ArrayPoolEventSource_BufferAllocatedReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason::ArrayPoolEventSource_BufferAllocatedReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason::ArrayPoolEventSource_BufferAllocatedReason()   {
}
constexpr ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason  GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason::Pooled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason  GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason::OverMaximumSize{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason  GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason::PoolExhausted{static_cast<int32_t>(0x2)};
