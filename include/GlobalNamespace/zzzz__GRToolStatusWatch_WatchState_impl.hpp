#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolStatusWatch_WatchState.hpp"
#include "GlobalNamespace/zzzz__GRToolStatusWatch_WatchState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolStatusWatch_WatchState::GRToolStatusWatch_WatchState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolStatusWatch_WatchState::GRToolStatusWatch_WatchState()   {
}
constexpr ::GlobalNamespace::GRToolStatusWatch_WatchState  GlobalNamespace::GRToolStatusWatch_WatchState::Dropped{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolStatusWatch_WatchState  GlobalNamespace::GRToolStatusWatch_WatchState::SnappedLocal{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRToolStatusWatch_WatchState  GlobalNamespace::GRToolStatusWatch_WatchState::SnappedRemote{static_cast<int32_t>(0x2)};
