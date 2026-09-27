#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyPest_Behavior.hpp"
#include "GlobalNamespace/zzzz__GREnemyPest_Behavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GREnemyPest_Behavior::GREnemyPest_Behavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyPest_Behavior::GREnemyPest_Behavior()   {
}
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Wander{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Chase{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Attack{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Stagger{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Grabbed{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Thrown{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Destroyed{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Investigate{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Jump{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Flashed{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::GREnemyPest_Behavior  GlobalNamespace::GREnemyPest_Behavior::Count{static_cast<int32_t>(0xb)};
