#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ClientWebSocket_InternalState.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_InternalState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ClientWebSocket_InternalState::ClientWebSocket_InternalState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClientWebSocket_InternalState::ClientWebSocket_InternalState()   {
}
constexpr ::GlobalNamespace::ClientWebSocket_InternalState  GlobalNamespace::ClientWebSocket_InternalState::Created{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ClientWebSocket_InternalState  GlobalNamespace::ClientWebSocket_InternalState::Connecting{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ClientWebSocket_InternalState  GlobalNamespace::ClientWebSocket_InternalState::Connected{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ClientWebSocket_InternalState  GlobalNamespace::ClientWebSocket_InternalState::Disposed{static_cast<int32_t>(0x3)};
