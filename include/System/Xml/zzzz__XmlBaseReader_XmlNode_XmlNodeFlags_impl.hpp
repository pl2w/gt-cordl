#pragma once
// IWYU pragma private; include "System/Xml/XmlBaseReader_XmlNode_XmlNodeFlags.hpp"
#include "System/Xml/zzzz__XmlBaseReader_XmlNode_XmlNodeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags::XmlNode_XmlBaseReader_XmlNodeFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags::XmlNode_XmlBaseReader_XmlNodeFlags()   {
}
constexpr ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags  GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags  GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags::CanGetAttribute{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags  GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags::CanMoveToElement{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags  GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags::HasValue{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags  GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags::AtomicValue{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags  GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags::SkipValue{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags  GlobalNamespace::XmlNode_XmlBaseReader_XmlNodeFlags::HasContent{static_cast<int32_t>(0x20)};
