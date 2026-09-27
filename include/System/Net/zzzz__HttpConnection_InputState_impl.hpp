#pragma once
// IWYU pragma private; include "System/Net/HttpConnection_InputState.hpp"
#include "System/Net/zzzz__HttpConnection_InputState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HttpConnection_InputState::HttpConnection_InputState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HttpConnection_InputState::HttpConnection_InputState()   {
}
constexpr ::GlobalNamespace::HttpConnection_InputState  GlobalNamespace::HttpConnection_InputState::RequestLine{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HttpConnection_InputState  GlobalNamespace::HttpConnection_InputState::Headers{static_cast<int32_t>(0x1)};
