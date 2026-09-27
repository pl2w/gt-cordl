#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_Token.hpp"
#include "System/Xml/zzzz__XmlTextWriter_Token_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlTextWriter_Token::XmlTextWriter_Token(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlTextWriter_Token::XmlTextWriter_Token()   {
}
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::PI{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::Doctype{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::Comment{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::CData{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::StartElement{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::EndElement{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::LongEndElement{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::StartAttribute{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::EndAttribute{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::Content{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::Base64{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::RawData{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::Whitespace{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::XmlTextWriter_Token  GlobalNamespace::XmlTextWriter_Token::Empty{static_cast<int32_t>(0xd)};
