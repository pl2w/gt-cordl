#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNetwork_OVRNetworkTcpClient_ConnectionState.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_OVRNetworkTcpClient_ConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::OVRNetworkTcpClient_OVRNetwork_ConnectionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::OVRNetworkTcpClient_OVRNetwork_ConnectionState()   {
}
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState  GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::Disconnected{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState  GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::Connected{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState  GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState::Connecting{static_cast<int32_t>(0x2)};
