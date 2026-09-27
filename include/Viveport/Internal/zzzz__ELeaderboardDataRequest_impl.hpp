#pragma once
// IWYU pragma private; include "Viveport/Internal/ELeaderboardDataRequest.hpp"
#include "Viveport/Internal/zzzz__ELeaderboardDataRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Viveport::Internal::ELeaderboardDataRequest::ELeaderboardDataRequest(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Viveport::Internal::ELeaderboardDataRequest::ELeaderboardDataRequest()   {
}
constexpr ::Viveport::Internal::ELeaderboardDataRequest  Viveport::Internal::ELeaderboardDataRequest::k_ELeaderboardDataRequestGlobal{static_cast<int32_t>(0x0)};
constexpr ::Viveport::Internal::ELeaderboardDataRequest  Viveport::Internal::ELeaderboardDataRequest::k_ELeaderboardDataRequestGlobalAroundUser{static_cast<int32_t>(0x1)};
constexpr ::Viveport::Internal::ELeaderboardDataRequest  Viveport::Internal::ELeaderboardDataRequest::k_ELeaderboardDataRequestLocal{static_cast<int32_t>(0x2)};
constexpr ::Viveport::Internal::ELeaderboardDataRequest  Viveport::Internal::ELeaderboardDataRequest::k_ELeaderboardDataRequestLocaleAroundUser{static_cast<int32_t>(0x3)};
