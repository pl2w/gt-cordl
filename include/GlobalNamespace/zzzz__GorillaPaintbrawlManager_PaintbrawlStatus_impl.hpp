#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPaintbrawlManager_PaintbrawlStatus.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::GorillaPaintbrawlManager_PaintbrawlStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::GorillaPaintbrawlManager_PaintbrawlStatus()   {
}
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::RedTeam{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::BlueTeam{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::Normal{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::Hit{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::Stunned{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::Grace{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::Eliminated{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus::None{static_cast<int32_t>(0x0)};
