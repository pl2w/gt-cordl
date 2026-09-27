#pragma once
// IWYU pragma private; include "LitJson/ParserToken.hpp"
#include "LitJson/zzzz__ParserToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::LitJson::ParserToken::ParserToken(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LitJson::ParserToken::ParserToken()   {
}
constexpr ::LitJson::ParserToken  LitJson::ParserToken::None{static_cast<int32_t>(0x10000)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::Number{static_cast<int32_t>(0x10001)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::True{static_cast<int32_t>(0x10002)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::False{static_cast<int32_t>(0x10003)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::Null{static_cast<int32_t>(0x10004)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::CharSeq{static_cast<int32_t>(0x10005)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::Char{static_cast<int32_t>(0x10006)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::Text{static_cast<int32_t>(0x10007)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::Object{static_cast<int32_t>(0x10008)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::ObjectPrime{static_cast<int32_t>(0x10009)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::Pair{static_cast<int32_t>(0x1000a)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::PairRest{static_cast<int32_t>(0x1000b)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::Array{static_cast<int32_t>(0x1000c)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::ArrayPrime{static_cast<int32_t>(0x1000d)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::Value{static_cast<int32_t>(0x1000e)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::ValueRest{static_cast<int32_t>(0x1000f)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::String{static_cast<int32_t>(0x10010)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::End{static_cast<int32_t>(0x10011)};
constexpr ::LitJson::ParserToken  LitJson::ParserToken::Epsilon{static_cast<int32_t>(0x10012)};
