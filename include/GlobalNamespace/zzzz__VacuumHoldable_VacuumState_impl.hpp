#pragma once
// IWYU pragma private; include "GlobalNamespace/VacuumHoldable_VacuumState.hpp"
#include "GlobalNamespace/zzzz__VacuumHoldable_VacuumState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VacuumHoldable_VacuumState::VacuumHoldable_VacuumState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VacuumHoldable_VacuumState::VacuumHoldable_VacuumState()   {
}
constexpr ::GlobalNamespace::VacuumHoldable_VacuumState  GlobalNamespace::VacuumHoldable_VacuumState::None{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VacuumHoldable_VacuumState  GlobalNamespace::VacuumHoldable_VacuumState::Active{static_cast<int32_t>(0x2)};
