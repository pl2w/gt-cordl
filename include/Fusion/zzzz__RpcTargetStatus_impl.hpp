#pragma once
// IWYU pragma private; include "Fusion/RpcTargetStatus.hpp"
#include "Fusion/zzzz__RpcTargetStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcTargetStatus::RpcTargetStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RpcTargetStatus::RpcTargetStatus()   {
}
constexpr ::Fusion::RpcTargetStatus  Fusion::RpcTargetStatus::Unreachable{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RpcTargetStatus  Fusion::RpcTargetStatus::Self{static_cast<int32_t>(0x1)};
constexpr ::Fusion::RpcTargetStatus  Fusion::RpcTargetStatus::Remote{static_cast<int32_t>(0x2)};
