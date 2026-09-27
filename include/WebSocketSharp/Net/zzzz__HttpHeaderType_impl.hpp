#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/HttpHeaderType.hpp"
#include "WebSocketSharp/Net/zzzz__HttpHeaderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::Net::HttpHeaderType::HttpHeaderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::HttpHeaderType::HttpHeaderType()   {
}
constexpr ::WebSocketSharp::Net::HttpHeaderType  WebSocketSharp::Net::HttpHeaderType::Unspecified{static_cast<int32_t>(0x0)};
constexpr ::WebSocketSharp::Net::HttpHeaderType  WebSocketSharp::Net::HttpHeaderType::Request{static_cast<int32_t>(0x1)};
constexpr ::WebSocketSharp::Net::HttpHeaderType  WebSocketSharp::Net::HttpHeaderType::Response{static_cast<int32_t>(0x2)};
constexpr ::WebSocketSharp::Net::HttpHeaderType  WebSocketSharp::Net::HttpHeaderType::Restricted{static_cast<int32_t>(0x4)};
constexpr ::WebSocketSharp::Net::HttpHeaderType  WebSocketSharp::Net::HttpHeaderType::MultiValue{static_cast<int32_t>(0x8)};
constexpr ::WebSocketSharp::Net::HttpHeaderType  WebSocketSharp::Net::HttpHeaderType::MultiValueInRequest{static_cast<int32_t>(0x10)};
constexpr ::WebSocketSharp::Net::HttpHeaderType  WebSocketSharp::Net::HttpHeaderType::MultiValueInResponse{static_cast<int32_t>(0x20)};
