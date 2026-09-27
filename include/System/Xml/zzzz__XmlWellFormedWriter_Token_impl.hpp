#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_Token.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_Token_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token::XmlWellFormedWriter_Token(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token::XmlWellFormedWriter_Token()   {
}
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::StartDocument{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::EndDocument{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::PI{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::Comment{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::Dtd{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::StartElement{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::EndElement{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::StartAttribute{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::EndAttribute{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::Text{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::CData{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::AtomicValue{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::Base64{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::RawData{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_Token  GlobalNamespace::XmlWellFormedWriter_Token::Whitespace{static_cast<int32_t>(0xe)};
