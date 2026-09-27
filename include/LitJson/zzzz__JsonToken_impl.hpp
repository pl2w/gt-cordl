#pragma once
// IWYU pragma private; include "LitJson/JsonToken.hpp"
#include "LitJson/zzzz__JsonToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::LitJson::JsonToken::JsonToken(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LitJson::JsonToken::JsonToken()   {
}
constexpr ::LitJson::JsonToken  LitJson::JsonToken::None{static_cast<int32_t>(0x0)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::ObjectStart{static_cast<int32_t>(0x1)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::PropertyName{static_cast<int32_t>(0x2)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::ObjectEnd{static_cast<int32_t>(0x3)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::ArrayStart{static_cast<int32_t>(0x4)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::ArrayEnd{static_cast<int32_t>(0x5)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::Int{static_cast<int32_t>(0x6)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::Long{static_cast<int32_t>(0x7)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::Double{static_cast<int32_t>(0x8)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::String{static_cast<int32_t>(0x9)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::Boolean{static_cast<int32_t>(0xa)};
constexpr ::LitJson::JsonToken  LitJson::JsonToken::Null{static_cast<int32_t>(0xb)};
