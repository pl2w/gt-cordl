#pragma once
// IWYU pragma private; include "WebSocketSharp/LogLevel.hpp"
#include "WebSocketSharp/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::WebSocketSharp::LogLevel::LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WebSocketSharp::LogLevel::LogLevel()   {
}
constexpr ::WebSocketSharp::LogLevel  WebSocketSharp::LogLevel::Trace{static_cast<int32_t>(0x0)};
constexpr ::WebSocketSharp::LogLevel  WebSocketSharp::LogLevel::Debug{static_cast<int32_t>(0x1)};
constexpr ::WebSocketSharp::LogLevel  WebSocketSharp::LogLevel::Info{static_cast<int32_t>(0x2)};
constexpr ::WebSocketSharp::LogLevel  WebSocketSharp::LogLevel::Warn{static_cast<int32_t>(0x3)};
constexpr ::WebSocketSharp::LogLevel  WebSocketSharp::LogLevel::Error{static_cast<int32_t>(0x4)};
constexpr ::WebSocketSharp::LogLevel  WebSocketSharp::LogLevel::Fatal{static_cast<int32_t>(0x5)};
