#pragma once
// IWYU pragma private; include "System/Net/ContextAwareResult_StateFlags.hpp"
#include "System/Net/zzzz__ContextAwareResult_StateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags::ContextAwareResult_StateFlags(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags::ContextAwareResult_StateFlags()   {
}
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags  GlobalNamespace::ContextAwareResult_StateFlags::None{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags  GlobalNamespace::ContextAwareResult_StateFlags::CaptureIdentity{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags  GlobalNamespace::ContextAwareResult_StateFlags::CaptureContext{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags  GlobalNamespace::ContextAwareResult_StateFlags::ThreadSafeContextCopy{static_cast<uint8_t>(0x4u)};
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags  GlobalNamespace::ContextAwareResult_StateFlags::PostBlockStarted{static_cast<uint8_t>(0x8u)};
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags  GlobalNamespace::ContextAwareResult_StateFlags::PostBlockFinished{static_cast<uint8_t>(0x10u)};
