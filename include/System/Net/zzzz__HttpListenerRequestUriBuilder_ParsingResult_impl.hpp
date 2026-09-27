#pragma once
// IWYU pragma private; include "System/Net/HttpListenerRequestUriBuilder_ParsingResult.hpp"
#include "System/Net/zzzz__HttpListenerRequestUriBuilder_ParsingResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult::HttpListenerRequestUriBuilder_ParsingResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult::HttpListenerRequestUriBuilder_ParsingResult()   {
}
constexpr ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult  GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult  GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult::InvalidString{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult  GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult::EncodingError{static_cast<int32_t>(0x2)};
