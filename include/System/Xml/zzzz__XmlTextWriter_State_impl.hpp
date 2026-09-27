#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_State.hpp"
#include "System/Xml/zzzz__XmlTextWriter_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlTextWriter_State::XmlTextWriter_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlTextWriter_State::XmlTextWriter_State()   {
}
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::Start{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::Prolog{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::PostDTD{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::Element{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::Attribute{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::Content{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::AttrOnly{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::Epilog{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::Error{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XmlTextWriter_State  GlobalNamespace::XmlTextWriter_State::Closed{static_cast<int32_t>(0x9)};
