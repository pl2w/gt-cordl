#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyChaser_Behavior.hpp"
#include "GlobalNamespace/zzzz__GREnemyChaser_Behavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GREnemyChaser_Behavior::GREnemyChaser_Behavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyChaser_Behavior::GREnemyChaser_Behavior()   {
}
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Patrol{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Wander{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Stagger{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Dying{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Chase{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Search{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Attack{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Flashed{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Investigate{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Jump{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::GREnemyChaser_Behavior  GlobalNamespace::GREnemyChaser_Behavior::Count{static_cast<int32_t>(0xb)};
