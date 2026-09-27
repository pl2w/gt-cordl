#pragma once
// IWYU pragma private; include "Fusion/RpcLocalInvokeResult.hpp"
#include "Fusion/zzzz__RpcLocalInvokeResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcLocalInvokeResult::RpcLocalInvokeResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RpcLocalInvokeResult::RpcLocalInvokeResult()   {
}
constexpr ::Fusion::RpcLocalInvokeResult  Fusion::RpcLocalInvokeResult::Invoked{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RpcLocalInvokeResult  Fusion::RpcLocalInvokeResult::NotInvokableLocally{static_cast<int32_t>(0x1)};
constexpr ::Fusion::RpcLocalInvokeResult  Fusion::RpcLocalInvokeResult::NotInvokableDuringResim{static_cast<int32_t>(0x2)};
constexpr ::Fusion::RpcLocalInvokeResult  Fusion::RpcLocalInvokeResult::InsufficientSourceAuthority{static_cast<int32_t>(0x3)};
constexpr ::Fusion::RpcLocalInvokeResult  Fusion::RpcLocalInvokeResult::InsufficientTargetAuthority{static_cast<int32_t>(0x4)};
constexpr ::Fusion::RpcLocalInvokeResult  Fusion::RpcLocalInvokeResult::TargetPlayerIsNotLocal{static_cast<int32_t>(0x5)};
constexpr ::Fusion::RpcLocalInvokeResult  Fusion::RpcLocalInvokeResult::PayloadSizeExceeded{static_cast<int32_t>(0x6)};
constexpr ::Fusion::RpcLocalInvokeResult  Fusion::RpcLocalInvokeResult::TagetPlayerIsNotLocal{static_cast<int32_t>(0x5)};
