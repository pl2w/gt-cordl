#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_CreateInstanceResult.hpp"
#include "Fusion/zzzz__NetworkRunner_CreateInstanceResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkRunner_CreateInstanceResult::NetworkRunner_CreateInstanceResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkRunner_CreateInstanceResult::NetworkRunner_CreateInstanceResult()   {
}
constexpr ::GlobalNamespace::NetworkRunner_CreateInstanceResult  GlobalNamespace::NetworkRunner_CreateInstanceResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkRunner_CreateInstanceResult  GlobalNamespace::NetworkRunner_CreateInstanceResult::Failed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkRunner_CreateInstanceResult  GlobalNamespace::NetworkRunner_CreateInstanceResult::InProgress{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NetworkRunner_CreateInstanceResult  GlobalNamespace::NetworkRunner_CreateInstanceResult::Ignore{static_cast<int32_t>(0x3)};
