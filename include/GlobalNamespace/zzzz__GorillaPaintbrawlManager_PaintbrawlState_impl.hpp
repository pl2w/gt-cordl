#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPaintbrawlManager_PaintbrawlState.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState::GorillaPaintbrawlManager_PaintbrawlState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState::GorillaPaintbrawlManager_PaintbrawlState()   {
}
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState::NotEnoughPlayers{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState::GameEnd{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState::GameEndWaiting{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState::StartCountdown{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState::CountingDownToStart{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState::GameStart{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState::GameRunning{static_cast<int32_t>(0x6)};
