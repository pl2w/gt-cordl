#pragma once
// IWYU pragma private; include "System/Xml/DtdParser_Token.hpp"
#include "System/Xml/zzzz__DtdParser_Token_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DtdParser_Token::DtdParser_Token(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DtdParser_Token::DtdParser_Token()   {
}
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::CDATA{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::_cordl_ID{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::IDREF{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::IDREFS{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::ENTITY{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::ENTITIES{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::NMTOKEN{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::NMTOKENS{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::NOTATION{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::None{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::PERef{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::AttlistDecl{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::ElementDecl{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::EntityDecl{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::NotationDecl{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Comment{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::PI{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::CondSectionStart{static_cast<int32_t>(0x11)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::CondSectionEnd{static_cast<int32_t>(0x12)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Eof{static_cast<int32_t>(0x13)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::REQUIRED{static_cast<int32_t>(0x14)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::IMPLIED{static_cast<int32_t>(0x15)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::FIXED{static_cast<int32_t>(0x16)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::QName{static_cast<int32_t>(0x17)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Name{static_cast<int32_t>(0x18)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Nmtoken{static_cast<int32_t>(0x19)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Quote{static_cast<int32_t>(0x1a)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::LeftParen{static_cast<int32_t>(0x1b)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::RightParen{static_cast<int32_t>(0x1c)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::GreaterThan{static_cast<int32_t>(0x1d)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Or{static_cast<int32_t>(0x1e)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::LeftBracket{static_cast<int32_t>(0x1f)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::RightBracket{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::PUBLIC{static_cast<int32_t>(0x21)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::SYSTEM{static_cast<int32_t>(0x22)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Literal{static_cast<int32_t>(0x23)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::DOCTYPE{static_cast<int32_t>(0x24)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::NData{static_cast<int32_t>(0x25)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Percent{static_cast<int32_t>(0x26)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Star{static_cast<int32_t>(0x27)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::QMark{static_cast<int32_t>(0x28)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Plus{static_cast<int32_t>(0x29)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::PCDATA{static_cast<int32_t>(0x2a)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::Comma{static_cast<int32_t>(0x2b)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::ANY{static_cast<int32_t>(0x2c)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::EMPTY{static_cast<int32_t>(0x2d)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::IGNORE{static_cast<int32_t>(0x2e)};
constexpr ::GlobalNamespace::DtdParser_Token  GlobalNamespace::DtdParser_Token::INCLUDE{static_cast<int32_t>(0x2f)};
