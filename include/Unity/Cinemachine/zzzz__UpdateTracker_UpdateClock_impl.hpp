#pragma once
// IWYU pragma private; include "Unity/Cinemachine/UpdateTracker_UpdateClock.hpp"
#include "Unity/Cinemachine/zzzz__UpdateTracker_UpdateClock_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UpdateTracker_UpdateClock::UpdateTracker_UpdateClock(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpdateTracker_UpdateClock::UpdateTracker_UpdateClock()   {
}
constexpr ::GlobalNamespace::UpdateTracker_UpdateClock  GlobalNamespace::UpdateTracker_UpdateClock::Fixed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UpdateTracker_UpdateClock  GlobalNamespace::UpdateTracker_UpdateClock::Late{static_cast<int32_t>(0x2)};
