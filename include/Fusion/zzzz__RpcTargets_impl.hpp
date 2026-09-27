#pragma once
// IWYU pragma private; include "Fusion/RpcTargets.hpp"
#include "Fusion/zzzz__RpcTargets_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcTargets::RpcTargets(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RpcTargets::RpcTargets()   {
}
constexpr ::Fusion::RpcTargets  Fusion::RpcTargets::StateAuthority{static_cast<int32_t>(0x1)};
constexpr ::Fusion::RpcTargets  Fusion::RpcTargets::InputAuthority{static_cast<int32_t>(0x2)};
constexpr ::Fusion::RpcTargets  Fusion::RpcTargets::Proxies{static_cast<int32_t>(0x4)};
constexpr ::Fusion::RpcTargets  Fusion::RpcTargets::All{static_cast<int32_t>(0x7)};
