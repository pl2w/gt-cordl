#pragma once
// IWYU pragma private; include "Fusion/RpcChannel.hpp"
#include "Fusion/zzzz__RpcChannel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcChannel::RpcChannel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RpcChannel::RpcChannel()   {
}
constexpr ::Fusion::RpcChannel  Fusion::RpcChannel::Reliable{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RpcChannel  Fusion::RpcChannel::Unreliable{static_cast<int32_t>(0x1)};
