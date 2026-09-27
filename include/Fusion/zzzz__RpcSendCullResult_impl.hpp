#pragma once
// IWYU pragma private; include "Fusion/RpcSendCullResult.hpp"
#include "Fusion/zzzz__RpcSendCullResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcSendCullResult::RpcSendCullResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RpcSendCullResult::RpcSendCullResult()   {
}
constexpr ::Fusion::RpcSendCullResult  Fusion::RpcSendCullResult::NotCulled{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RpcSendCullResult  Fusion::RpcSendCullResult::NotInvokableDuringResim{static_cast<int32_t>(0x1)};
constexpr ::Fusion::RpcSendCullResult  Fusion::RpcSendCullResult::InsufficientSourceAuthority{static_cast<int32_t>(0x2)};
constexpr ::Fusion::RpcSendCullResult  Fusion::RpcSendCullResult::NoActiveConnections{static_cast<int32_t>(0x3)};
constexpr ::Fusion::RpcSendCullResult  Fusion::RpcSendCullResult::TargetPlayerUnreachable{static_cast<int32_t>(0x4)};
constexpr ::Fusion::RpcSendCullResult  Fusion::RpcSendCullResult::TargetPlayerIsLocalButRpcIsNotInvokableLocally{static_cast<int32_t>(0x5)};
constexpr ::Fusion::RpcSendCullResult  Fusion::RpcSendCullResult::PayloadSizeExceeded{static_cast<int32_t>(0x6)};
