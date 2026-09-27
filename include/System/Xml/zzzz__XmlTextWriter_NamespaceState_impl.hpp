#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_NamespaceState.hpp"
#include "System/Xml/zzzz__XmlTextWriter_NamespaceState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlTextWriter_NamespaceState::XmlTextWriter_NamespaceState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlTextWriter_NamespaceState::XmlTextWriter_NamespaceState()   {
}
constexpr ::GlobalNamespace::XmlTextWriter_NamespaceState  GlobalNamespace::XmlTextWriter_NamespaceState::Uninitialized{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlTextWriter_NamespaceState  GlobalNamespace::XmlTextWriter_NamespaceState::NotDeclaredButInScope{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlTextWriter_NamespaceState  GlobalNamespace::XmlTextWriter_NamespaceState::DeclaredButNotWrittenOut{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XmlTextWriter_NamespaceState  GlobalNamespace::XmlTextWriter_NamespaceState::DeclaredAndWrittenOut{static_cast<int32_t>(0x3)};
