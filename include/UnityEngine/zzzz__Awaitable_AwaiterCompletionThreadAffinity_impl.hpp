#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_AwaiterCompletionThreadAffinity.hpp"
#include "UnityEngine/zzzz__Awaitable_AwaiterCompletionThreadAffinity_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity::Awaitable_AwaiterCompletionThreadAffinity(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity::Awaitable_AwaiterCompletionThreadAffinity()   {
}
constexpr ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity  GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity  GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity::MainThread{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity  GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity::BackgroundThread{static_cast<int32_t>(0x2)};
