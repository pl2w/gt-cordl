#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/AuthenticationSchemes.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationSchemes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::Net::AuthenticationSchemes::AuthenticationSchemes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::AuthenticationSchemes::AuthenticationSchemes()   {
}
constexpr ::WebSocketSharp::Net::AuthenticationSchemes  WebSocketSharp::Net::AuthenticationSchemes::None{static_cast<int32_t>(0x0)};
constexpr ::WebSocketSharp::Net::AuthenticationSchemes  WebSocketSharp::Net::AuthenticationSchemes::Digest{static_cast<int32_t>(0x1)};
constexpr ::WebSocketSharp::Net::AuthenticationSchemes  WebSocketSharp::Net::AuthenticationSchemes::Basic{static_cast<int32_t>(0x8)};
constexpr ::WebSocketSharp::Net::AuthenticationSchemes  WebSocketSharp::Net::AuthenticationSchemes::Anonymous{static_cast<int32_t>(0x8000)};
