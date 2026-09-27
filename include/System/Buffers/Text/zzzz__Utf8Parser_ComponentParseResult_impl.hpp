#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Parser_ComponentParseResult.hpp"
#include "System/Buffers/Text/zzzz__Utf8Parser_ComponentParseResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Utf8Parser_ComponentParseResult::Utf8Parser_ComponentParseResult(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Utf8Parser_ComponentParseResult::Utf8Parser_ComponentParseResult()   {
}
constexpr ::GlobalNamespace::Utf8Parser_ComponentParseResult  GlobalNamespace::Utf8Parser_ComponentParseResult::NoMoreData{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::Utf8Parser_ComponentParseResult  GlobalNamespace::Utf8Parser_ComponentParseResult::Colon{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::Utf8Parser_ComponentParseResult  GlobalNamespace::Utf8Parser_ComponentParseResult::Period{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::Utf8Parser_ComponentParseResult  GlobalNamespace::Utf8Parser_ComponentParseResult::ParseFailure{static_cast<uint8_t>(0x3u)};
