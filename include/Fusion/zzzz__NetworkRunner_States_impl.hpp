#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_States.hpp"
#include "Fusion/zzzz__NetworkRunner_States_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkRunner_States::NetworkRunner_States(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkRunner_States::NetworkRunner_States()   {
}
constexpr ::GlobalNamespace::NetworkRunner_States  GlobalNamespace::NetworkRunner_States::Starting{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkRunner_States  GlobalNamespace::NetworkRunner_States::Running{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NetworkRunner_States  GlobalNamespace::NetworkRunner_States::Shutdown{static_cast<int32_t>(0x3)};
