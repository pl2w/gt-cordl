#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventGate_Mode.hpp"
#include "GlobalNamespace/zzzz__RigEventGate_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RigEventGate_Mode::RigEventGate_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigEventGate_Mode::RigEventGate_Mode()   {
}
constexpr ::GlobalNamespace::RigEventGate_Mode  GlobalNamespace::RigEventGate_Mode::RELATIVE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RigEventGate_Mode  GlobalNamespace::RigEventGate_Mode::ABSOLUTE{static_cast<int32_t>(0x1)};
