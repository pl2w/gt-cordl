#pragma once
// IWYU pragma private; include "Viveport/Internal/ELeaderboardDataTimeRange.hpp"
#include "Viveport/Internal/zzzz__ELeaderboardDataTimeRange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Viveport::Internal::ELeaderboardDataTimeRange::ELeaderboardDataTimeRange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Viveport::Internal::ELeaderboardDataTimeRange::ELeaderboardDataTimeRange()   {
}
constexpr ::Viveport::Internal::ELeaderboardDataTimeRange  Viveport::Internal::ELeaderboardDataTimeRange::k_ELeaderboardDataScropeAllTime{static_cast<int32_t>(0x0)};
constexpr ::Viveport::Internal::ELeaderboardDataTimeRange  Viveport::Internal::ELeaderboardDataTimeRange::k_ELeaderboardDataScropeDaily{static_cast<int32_t>(0x1)};
constexpr ::Viveport::Internal::ELeaderboardDataTimeRange  Viveport::Internal::ELeaderboardDataTimeRange::k_ELeaderboardDataScropeWeekly{static_cast<int32_t>(0x2)};
constexpr ::Viveport::Internal::ELeaderboardDataTimeRange  Viveport::Internal::ELeaderboardDataTimeRange::k_ELeaderboardDataScropeMonthly{static_cast<int32_t>(0x3)};
