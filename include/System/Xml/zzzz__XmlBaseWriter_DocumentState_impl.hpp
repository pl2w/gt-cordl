#pragma once
// IWYU pragma private; include "System/Xml/XmlBaseWriter_DocumentState.hpp"
#include "System/Xml/zzzz__XmlBaseWriter_DocumentState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlBaseWriter_DocumentState::XmlBaseWriter_DocumentState(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlBaseWriter_DocumentState::XmlBaseWriter_DocumentState()   {
}
constexpr ::GlobalNamespace::XmlBaseWriter_DocumentState  GlobalNamespace::XmlBaseWriter_DocumentState::None{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::XmlBaseWriter_DocumentState  GlobalNamespace::XmlBaseWriter_DocumentState::Document{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::XmlBaseWriter_DocumentState  GlobalNamespace::XmlBaseWriter_DocumentState::Epilog{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::XmlBaseWriter_DocumentState  GlobalNamespace::XmlBaseWriter_DocumentState::End{static_cast<uint8_t>(0x3u)};
