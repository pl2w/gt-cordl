#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TransactionStatus.hpp"
#include "PlayFab/ClientModels/zzzz__TransactionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::TransactionStatus::TransactionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::TransactionStatus::TransactionStatus()   {
}
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::CreateCart{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Init{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Approved{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Succeeded{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::FailedByProvider{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::DisputePending{static_cast<int32_t>(0x5)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::RefundPending{static_cast<int32_t>(0x6)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Refunded{static_cast<int32_t>(0x7)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::RefundFailed{static_cast<int32_t>(0x8)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::ChargedBack{static_cast<int32_t>(0x9)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::FailedByUber{static_cast<int32_t>(0xa)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::FailedByPlayFab{static_cast<int32_t>(0xb)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Revoked{static_cast<int32_t>(0xc)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::TradePending{static_cast<int32_t>(0xd)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Traded{static_cast<int32_t>(0xe)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Upgraded{static_cast<int32_t>(0xf)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::StackPending{static_cast<int32_t>(0x10)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Stacked{static_cast<int32_t>(0x11)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Other{static_cast<int32_t>(0x12)};
constexpr ::PlayFab::ClientModels::TransactionStatus  PlayFab::ClientModels::TransactionStatus::Failed{static_cast<int32_t>(0x13)};
