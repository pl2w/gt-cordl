#pragma once
// IWYU pragma private; include "System/Xml/XmlEventCache_XmlEventType.hpp"
#include "System/Xml/zzzz__XmlEventCache_XmlEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType::XmlEventCache_XmlEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType::XmlEventCache_XmlEventType()   {
}
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::DocType{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::StartElem{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::StartAttr{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::EndAttr{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::CData{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::Comment{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::PI{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::Whitespace{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::String{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::Raw{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::EntRef{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::CharEnt{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::SurrCharEnt{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::Base64{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::BinHex{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::XmlDecl1{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::XmlDecl2{static_cast<int32_t>(0x11)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::StartContent{static_cast<int32_t>(0x12)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::EndElem{static_cast<int32_t>(0x13)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::FullEndElem{static_cast<int32_t>(0x14)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::Nmsp{static_cast<int32_t>(0x15)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::EndBase64{static_cast<int32_t>(0x16)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::Close{static_cast<int32_t>(0x17)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::Flush{static_cast<int32_t>(0x18)};
constexpr ::GlobalNamespace::XmlEventCache_XmlEventType  GlobalNamespace::XmlEventCache_XmlEventType::Dispose{static_cast<int32_t>(0x19)};
