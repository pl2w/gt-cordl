#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_State.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlWellFormedWriter_State::XmlWellFormedWriter_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlWellFormedWriter_State::XmlWellFormedWriter_State()   {
}
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::Start{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::TopLevel{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::Document{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::Element{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::Content{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::B64Content{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::B64Attribute{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::AfterRootEle{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::Attribute{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::SpecialAttr{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::EndDocument{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::RootLevelAttr{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::RootLevelSpecAttr{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::RootLevelB64Attr{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::AfterRootLevelAttr{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::Closed{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::Error{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::StartContent{static_cast<int32_t>(0x65)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::StartContentEle{static_cast<int32_t>(0x66)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::StartContentB64{static_cast<int32_t>(0x67)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::StartDoc{static_cast<int32_t>(0x68)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::StartDocEle{static_cast<int32_t>(0x6a)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::EndAttrSEle{static_cast<int32_t>(0x6b)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::EndAttrEEle{static_cast<int32_t>(0x6c)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::EndAttrSCont{static_cast<int32_t>(0x6d)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::EndAttrSAttr{static_cast<int32_t>(0x6f)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::PostB64Cont{static_cast<int32_t>(0x70)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::PostB64Attr{static_cast<int32_t>(0x71)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::PostB64RootAttr{static_cast<int32_t>(0x72)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::StartFragEle{static_cast<int32_t>(0x73)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::StartFragCont{static_cast<int32_t>(0x74)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::StartFragB64{static_cast<int32_t>(0x75)};
constexpr ::GlobalNamespace::XmlWellFormedWriter_State  GlobalNamespace::XmlWellFormedWriter_State::StartRootLevelAttr{static_cast<int32_t>(0x76)};
