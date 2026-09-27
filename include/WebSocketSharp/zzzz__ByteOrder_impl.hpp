#pragma once
// IWYU pragma private; include "WebSocketSharp/ByteOrder.hpp"
#include "WebSocketSharp/zzzz__ByteOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::ByteOrder::ByteOrder(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::ByteOrder::ByteOrder()   {
}
constexpr ::WebSocketSharp::ByteOrder  WebSocketSharp::ByteOrder::Little{static_cast<int32_t>(0x0)};
constexpr ::WebSocketSharp::ByteOrder  WebSocketSharp::ByteOrder::Big{static_cast<int32_t>(0x1)};
