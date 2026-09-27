#pragma once
// IWYU pragma private; include "Cysharp/Text/ParserScanResult.hpp"
#include "Cysharp/Text/zzzz__ParserScanResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Text::ParserScanResult::ParserScanResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Cysharp::Text::ParserScanResult::ParserScanResult()   {
}
constexpr ::Cysharp::Text::ParserScanResult  Cysharp::Text::ParserScanResult::BraceOpen{static_cast<int32_t>(0x0)};
constexpr ::Cysharp::Text::ParserScanResult  Cysharp::Text::ParserScanResult::EscapedChar{static_cast<int32_t>(0x1)};
constexpr ::Cysharp::Text::ParserScanResult  Cysharp::Text::ParserScanResult::NormalChar{static_cast<int32_t>(0x2)};
