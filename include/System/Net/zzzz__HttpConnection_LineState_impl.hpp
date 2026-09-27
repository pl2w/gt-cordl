#pragma once
// IWYU pragma private; include "System/Net/HttpConnection_LineState.hpp"
#include "System/Net/zzzz__HttpConnection_LineState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HttpConnection_LineState::HttpConnection_LineState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HttpConnection_LineState::HttpConnection_LineState()   {
}
constexpr ::GlobalNamespace::HttpConnection_LineState  GlobalNamespace::HttpConnection_LineState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HttpConnection_LineState  GlobalNamespace::HttpConnection_LineState::CR{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HttpConnection_LineState  GlobalNamespace::HttpConnection_LineState::LF{static_cast<int32_t>(0x2)};
