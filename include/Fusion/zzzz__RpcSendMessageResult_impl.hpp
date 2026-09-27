#pragma once
// IWYU pragma private; include "Fusion/RpcSendMessageResult.hpp"
#include "Fusion/zzzz__RpcSendMessageResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcSendMessageResult::RpcSendMessageResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RpcSendMessageResult::RpcSendMessageResult()   {
}
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::SentToServerForForwarding{static_cast<int32_t>(0x101)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::SentToTargetClient{static_cast<int32_t>(0x102)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::SentBroadcast{static_cast<int32_t>(0x503)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::NotSentTargetObjectNotConfirmed{static_cast<int32_t>(0xa04)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::NotSentTargetObjectNotInPlayerInterest{static_cast<int32_t>(0xa05)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::NotSentTargetClientNotAvailable{static_cast<int32_t>(0x206)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::NotSentBroadcastNoActiveConnections{static_cast<int32_t>(0x607)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::NotSentBroadcastNoConfirmedNorInterestedClients{static_cast<int32_t>(0xe08)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::MaskSent{static_cast<int32_t>(0x100)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::MaskNotSent{static_cast<int32_t>(0x200)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::MaskBroadcast{static_cast<int32_t>(0x400)};
constexpr ::Fusion::RpcSendMessageResult  Fusion::RpcSendMessageResult::MaskCulled{static_cast<int32_t>(0x800)};
