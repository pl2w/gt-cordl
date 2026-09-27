#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugHudStats_State.hpp"
#include "GlobalNamespace/zzzz__DebugHudStats_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebugHudStats_State::DebugHudStats_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugHudStats_State::DebugHudStats_State()   {
}
constexpr ::GlobalNamespace::DebugHudStats_State  GlobalNamespace::DebugHudStats_State::Inactive{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DebugHudStats_State  GlobalNamespace::DebugHudStats_State::Active{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DebugHudStats_State  GlobalNamespace::DebugHudStats_State::ShowLog{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DebugHudStats_State  GlobalNamespace::DebugHudStats_State::ShowError{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::DebugHudStats_State  GlobalNamespace::DebugHudStats_State::ShowStats{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::DebugHudStats_State  GlobalNamespace::DebugHudStats_State::ShowRBs{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::DebugHudStats_State  GlobalNamespace::DebugHudStats_State::timeAdjust{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::DebugHudStats_State  GlobalNamespace::DebugHudStats_State::RecordingMode{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::DebugHudStats_State  GlobalNamespace::DebugHudStats_State::TitleDataMonitor{static_cast<int32_t>(0x8)};
