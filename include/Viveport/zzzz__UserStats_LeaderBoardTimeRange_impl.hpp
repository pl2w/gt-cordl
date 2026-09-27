#pragma once
// IWYU pragma private; include "Viveport/UserStats_LeaderBoardTimeRange.hpp"
#include "Viveport/zzzz__UserStats_LeaderBoardTimeRange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UserStats_LeaderBoardTimeRange::UserStats_LeaderBoardTimeRange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserStats_LeaderBoardTimeRange::UserStats_LeaderBoardTimeRange()   {
}
constexpr ::GlobalNamespace::UserStats_LeaderBoardTimeRange  GlobalNamespace::UserStats_LeaderBoardTimeRange::AllTime{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UserStats_LeaderBoardTimeRange  GlobalNamespace::UserStats_LeaderBoardTimeRange::Daily{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UserStats_LeaderBoardTimeRange  GlobalNamespace::UserStats_LeaderBoardTimeRange::Weekly{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::UserStats_LeaderBoardTimeRange  GlobalNamespace::UserStats_LeaderBoardTimeRange::Monthly{static_cast<int32_t>(0x3)};
