#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyMonkeye_Behavior.hpp"
#include "GlobalNamespace/zzzz__GREnemyMonkeye_Behavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior::GREnemyMonkeye_Behavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior::GREnemyMonkeye_Behavior()   {
}
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Patrol{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Stagger{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Dying{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Chase{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Search{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Attack{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::AttackDisco{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::AttackSlamdown{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Investigate{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Jump{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior  GlobalNamespace::GREnemyMonkeye_Behavior::Count{static_cast<int32_t>(0xb)};
