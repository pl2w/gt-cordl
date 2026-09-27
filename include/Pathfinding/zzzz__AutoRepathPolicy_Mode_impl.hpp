#pragma once
// IWYU pragma private; include "Pathfinding/AutoRepathPolicy_Mode.hpp"
#include "Pathfinding/zzzz__AutoRepathPolicy_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AutoRepathPolicy_Mode::AutoRepathPolicy_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoRepathPolicy_Mode::AutoRepathPolicy_Mode()   {
}
constexpr ::GlobalNamespace::AutoRepathPolicy_Mode  GlobalNamespace::AutoRepathPolicy_Mode::Never{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AutoRepathPolicy_Mode  GlobalNamespace::AutoRepathPolicy_Mode::EveryNSeconds{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AutoRepathPolicy_Mode  GlobalNamespace::AutoRepathPolicy_Mode::Dynamic{static_cast<int32_t>(0x2)};
