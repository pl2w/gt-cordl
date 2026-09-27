#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleCourse_RaceState.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourse_RaceState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ObstacleCourse_RaceState::ObstacleCourse_RaceState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleCourse_RaceState::ObstacleCourse_RaceState()   {
}
constexpr ::GlobalNamespace::ObstacleCourse_RaceState  GlobalNamespace::ObstacleCourse_RaceState::Started{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ObstacleCourse_RaceState  GlobalNamespace::ObstacleCourse_RaceState::Waiting{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ObstacleCourse_RaceState  GlobalNamespace::ObstacleCourse_RaceState::Finished{static_cast<int32_t>(0x2)};
