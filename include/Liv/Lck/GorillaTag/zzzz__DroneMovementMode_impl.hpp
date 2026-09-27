#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneMovementMode.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneMovementMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::GorillaTag::DroneMovementMode::DroneMovementMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::DroneMovementMode::DroneMovementMode()   {
}
constexpr ::Liv::Lck::GorillaTag::DroneMovementMode  Liv::Lck::GorillaTag::DroneMovementMode::Free{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::GorillaTag::DroneMovementMode  Liv::Lck::GorillaTag::DroneMovementMode::Orbiting{static_cast<int32_t>(0x1)};
