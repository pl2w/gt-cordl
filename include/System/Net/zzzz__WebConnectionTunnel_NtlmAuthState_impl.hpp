#pragma once
// IWYU pragma private; include "System/Net/WebConnectionTunnel_NtlmAuthState.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_NtlmAuthState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState::WebConnectionTunnel_NtlmAuthState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState::WebConnectionTunnel_NtlmAuthState()   {
}
constexpr ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState  GlobalNamespace::WebConnectionTunnel_NtlmAuthState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState  GlobalNamespace::WebConnectionTunnel_NtlmAuthState::Challenge{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState  GlobalNamespace::WebConnectionTunnel_NtlmAuthState::Response{static_cast<int32_t>(0x2)};
