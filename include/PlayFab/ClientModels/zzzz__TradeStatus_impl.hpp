#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TradeStatus.hpp"
#include "PlayFab/ClientModels/zzzz__TradeStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::TradeStatus::TradeStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::TradeStatus::TradeStatus()   {
}
constexpr ::PlayFab::ClientModels::TradeStatus  PlayFab::ClientModels::TradeStatus::Invalid{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::TradeStatus  PlayFab::ClientModels::TradeStatus::Opening{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::TradeStatus  PlayFab::ClientModels::TradeStatus::Open{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ClientModels::TradeStatus  PlayFab::ClientModels::TradeStatus::Accepting{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::ClientModels::TradeStatus  PlayFab::ClientModels::TradeStatus::Accepted{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::ClientModels::TradeStatus  PlayFab::ClientModels::TradeStatus::Filled{static_cast<int32_t>(0x5)};
constexpr ::PlayFab::ClientModels::TradeStatus  PlayFab::ClientModels::TradeStatus::Cancelled{static_cast<int32_t>(0x6)};
