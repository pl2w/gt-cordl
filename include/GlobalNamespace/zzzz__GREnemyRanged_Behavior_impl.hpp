#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyRanged_Behavior.hpp"
#include "GlobalNamespace/zzzz__GREnemyRanged_Behavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GREnemyRanged_Behavior::GREnemyRanged_Behavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyRanged_Behavior::GREnemyRanged_Behavior()   {
}
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::Patrol{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::Search{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::Stagger{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::Dying{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::SeekRangedAttackPosition{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::RangedAttack{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::RangedAttackCooldown{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::Flashed{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::Investigate{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::Jump{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::GREnemyRanged_Behavior  GlobalNamespace::GREnemyRanged_Behavior::Count{static_cast<int32_t>(0xb)};
