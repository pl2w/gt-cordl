#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TurnerEventBroadcaster_TurnMode.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnerEventBroadcaster_TurnMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TurnerEventBroadcaster_TurnMode::TurnerEventBroadcaster_TurnMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TurnerEventBroadcaster_TurnMode::TurnerEventBroadcaster_TurnMode()   {
}
constexpr ::GlobalNamespace::TurnerEventBroadcaster_TurnMode  GlobalNamespace::TurnerEventBroadcaster_TurnMode::Snap{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TurnerEventBroadcaster_TurnMode  GlobalNamespace::TurnerEventBroadcaster_TurnMode::Smooth{static_cast<int32_t>(0x1)};
