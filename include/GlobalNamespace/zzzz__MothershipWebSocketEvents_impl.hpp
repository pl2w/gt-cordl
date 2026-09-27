#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketEvents.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketEvents_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MothershipWebSocketEvents::MothershipWebSocketEvents(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketEvents::MothershipWebSocketEvents()   {
}
constexpr ::GlobalNamespace::MothershipWebSocketEvents  GlobalNamespace::MothershipWebSocketEvents::OPEN{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MothershipWebSocketEvents  GlobalNamespace::MothershipWebSocketEvents::MESSAGE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MothershipWebSocketEvents  GlobalNamespace::MothershipWebSocketEvents::CLOSE{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MothershipWebSocketEvents  GlobalNamespace::MothershipWebSocketEvents::ERROR{static_cast<int32_t>(0x3)};
