#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorType.hpp"
#include "GlobalNamespace/zzzz__GRElevatorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRElevatorType::GRElevatorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRElevatorType::GRElevatorType()   {
}
constexpr ::GlobalNamespace::GRElevatorType  GlobalNamespace::GRElevatorType::Elevator{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRElevatorType  GlobalNamespace::GRElevatorType::Shuttle{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRElevatorType  GlobalNamespace::GRElevatorType::Airlock{static_cast<int32_t>(0x2)};
