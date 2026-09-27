#pragma once
// IWYU pragma private; include "Fusion/RpcSources.hpp"
#include "Fusion/zzzz__RpcSources_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcSources::RpcSources(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RpcSources::RpcSources()   {
}
constexpr ::Fusion::RpcSources  Fusion::RpcSources::StateAuthority{static_cast<int32_t>(0x1)};
constexpr ::Fusion::RpcSources  Fusion::RpcSources::InputAuthority{static_cast<int32_t>(0x2)};
constexpr ::Fusion::RpcSources  Fusion::RpcSources::Proxies{static_cast<int32_t>(0x4)};
constexpr ::Fusion::RpcSources  Fusion::RpcSources::All{static_cast<int32_t>(0x7)};
