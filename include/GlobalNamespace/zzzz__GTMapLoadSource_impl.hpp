#pragma once
// IWYU pragma private; include "GlobalNamespace/GTMapLoadSource.hpp"
#include "GlobalNamespace/zzzz__GTMapLoadSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTMapLoadSource::GTMapLoadSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTMapLoadSource::GTMapLoadSource()   {
}
constexpr ::GlobalNamespace::GTMapLoadSource  GlobalNamespace::GTMapLoadSource::none{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTMapLoadSource  GlobalNamespace::GTMapLoadSource::featured_hallway{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTMapLoadSource  GlobalNamespace::GTMapLoadSource::teleporter{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTMapLoadSource  GlobalNamespace::GTMapLoadSource::terminal_browse{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GTMapLoadSource  GlobalNamespace::GTMapLoadSource::terminal_search{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GTMapLoadSource  GlobalNamespace::GTMapLoadSource::room_sync{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GTMapLoadSource  GlobalNamespace::GTMapLoadSource::room_reload{static_cast<int32_t>(0x6)};
