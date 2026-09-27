#pragma once
// IWYU pragma private; include "Viveport/Internal/ELeaderboardDisplayType.hpp"
#include "Viveport/Internal/zzzz__ELeaderboardDisplayType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Viveport::Internal::ELeaderboardDisplayType::ELeaderboardDisplayType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Viveport::Internal::ELeaderboardDisplayType::ELeaderboardDisplayType()   {
}
constexpr ::Viveport::Internal::ELeaderboardDisplayType  Viveport::Internal::ELeaderboardDisplayType::k_ELeaderboardDisplayTypeNone{static_cast<int32_t>(0x0)};
constexpr ::Viveport::Internal::ELeaderboardDisplayType  Viveport::Internal::ELeaderboardDisplayType::k_ELeaderboardDisplayTypeNumeric{static_cast<int32_t>(0x1)};
constexpr ::Viveport::Internal::ELeaderboardDisplayType  Viveport::Internal::ELeaderboardDisplayType::k_ELeaderboardDisplayTypeTimeSeconds{static_cast<int32_t>(0x2)};
constexpr ::Viveport::Internal::ELeaderboardDisplayType  Viveport::Internal::ELeaderboardDisplayType::k_ELeaderboardDisplayTypeTimeMilliSeconds{static_cast<int32_t>(0x3)};
