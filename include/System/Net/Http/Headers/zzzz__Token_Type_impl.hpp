#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/Token_Type.hpp"
#include "System/Net/Http/Headers/zzzz__Token_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Token_Type::Token_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Token_Type::Token_Type()   {
}
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::Error{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::End{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::Token{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::QuotedString{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::SeparatorEqual{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::SeparatorSemicolon{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::SeparatorSlash{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::SeparatorDash{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::SeparatorComma{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::Token_Type  GlobalNamespace::Token_Type::OpenParens{static_cast<int32_t>(0x9)};
