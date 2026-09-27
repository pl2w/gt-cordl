#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBreakable_BreakableState.hpp"
#include "GlobalNamespace/zzzz__GRBreakable_BreakableState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRBreakable_BreakableState::GRBreakable_BreakableState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBreakable_BreakableState::GRBreakable_BreakableState()   {
}
constexpr ::GlobalNamespace::GRBreakable_BreakableState  GlobalNamespace::GRBreakable_BreakableState::Unbroken{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRBreakable_BreakableState  GlobalNamespace::GRBreakable_BreakableState::Broken{static_cast<int32_t>(0x1)};
