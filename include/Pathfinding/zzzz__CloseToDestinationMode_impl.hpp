#pragma once
// IWYU pragma private; include "Pathfinding/CloseToDestinationMode.hpp"
#include "Pathfinding/zzzz__CloseToDestinationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::CloseToDestinationMode::CloseToDestinationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::CloseToDestinationMode::CloseToDestinationMode()   {
}
constexpr ::Pathfinding::CloseToDestinationMode  Pathfinding::CloseToDestinationMode::Stop{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::CloseToDestinationMode  Pathfinding::CloseToDestinationMode::ContinueToExactDestination{static_cast<int32_t>(0x1)};
