#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Phase.hpp"
#include "Fusion/zzzz__DynamicHeap_Phase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_Phase::DynamicHeap_Phase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_Phase::DynamicHeap_Phase()   {
}
constexpr ::GlobalNamespace::DynamicHeap_Phase  GlobalNamespace::DynamicHeap_Phase::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DynamicHeap_Phase  GlobalNamespace::DynamicHeap_Phase::Mark{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DynamicHeap_Phase  GlobalNamespace::DynamicHeap_Phase::Sweep{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DynamicHeap_Phase  GlobalNamespace::DynamicHeap_Phase::Free{static_cast<int32_t>(0x3)};
