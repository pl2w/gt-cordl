#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGameEvents_EventType.hpp"
#include "GlobalNamespace/zzzz__PlayerGameEvents_EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayerGameEvents_EventType::PlayerGameEvents_EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerGameEvents_EventType::PlayerGameEvents_EventType()   {
}
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::NONE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::GameModeObjective{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::GameModeCompleteRound{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::GrabbedObject{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::DroppedObject{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::EatObject{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::TapObject{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::LaunchedProjectile{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::PlayerMoved{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::PlayerSwam{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::TriggerHandEfffect{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::EnterLocation{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType  GlobalNamespace::PlayerGameEvents_EventType::MiscEvent{static_cast<int32_t>(0xc)};
