#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNative_LayoutLogEventType.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNative_LayoutLogEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType::LayoutNative_LayoutLogEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType::LayoutNative_LayoutLogEventType()   {
}
constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType  GlobalNamespace::LayoutNative_LayoutLogEventType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType  GlobalNamespace::LayoutNative_LayoutLogEventType::Error{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType  GlobalNamespace::LayoutNative_LayoutLogEventType::Measure{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType  GlobalNamespace::LayoutNative_LayoutLogEventType::Layout{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType  GlobalNamespace::LayoutNative_LayoutLogEventType::CacheUsage{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType  GlobalNamespace::LayoutNative_LayoutLogEventType::BeginLayout{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::LayoutNative_LayoutLogEventType  GlobalNamespace::LayoutNative_LayoutLogEventType::EndLayout{static_cast<int32_t>(0x6)};
