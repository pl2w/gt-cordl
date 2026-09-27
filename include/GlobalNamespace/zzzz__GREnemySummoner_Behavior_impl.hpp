#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemySummoner_Behavior.hpp"
#include "GlobalNamespace/zzzz__GREnemySummoner_Behavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GREnemySummoner_Behavior::GREnemySummoner_Behavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemySummoner_Behavior::GREnemySummoner_Behavior()   {
}
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::Wander{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::Stagger{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::Destroyed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::Summon{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::KeepDistance{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::MoveToTarget{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::Investigate{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::Jump{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::Flashed{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::GREnemySummoner_Behavior  GlobalNamespace::GREnemySummoner_Behavior::Count{static_cast<int32_t>(0xa)};
