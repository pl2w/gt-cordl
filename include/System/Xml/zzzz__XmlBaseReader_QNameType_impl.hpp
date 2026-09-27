#pragma once
// IWYU pragma private; include "System/Xml/XmlBaseReader_QNameType.hpp"
#include "System/Xml/zzzz__XmlBaseReader_QNameType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlBaseReader_QNameType::XmlBaseReader_QNameType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlBaseReader_QNameType::XmlBaseReader_QNameType()   {
}
constexpr ::GlobalNamespace::XmlBaseReader_QNameType  GlobalNamespace::XmlBaseReader_QNameType::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlBaseReader_QNameType  GlobalNamespace::XmlBaseReader_QNameType::Xmlns{static_cast<int32_t>(0x1)};
