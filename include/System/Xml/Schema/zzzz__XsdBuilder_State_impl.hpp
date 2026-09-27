#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdBuilder_State.hpp"
#include "System/Xml/Schema/zzzz__XsdBuilder_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XsdBuilder_State::XsdBuilder_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XsdBuilder_State::XsdBuilder_State()   {
}
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Root{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Schema{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Annotation{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Include{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Import{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Element{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Attribute{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::AttributeGroup{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::AttributeGroupRef{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::AnyAttribute{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Group{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::GroupRef{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::All{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Choice{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Sequence{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Any{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Notation{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::SimpleType{static_cast<int32_t>(0x11)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::ComplexType{static_cast<int32_t>(0x12)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::ComplexContent{static_cast<int32_t>(0x13)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::ComplexContentRestriction{static_cast<int32_t>(0x14)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::ComplexContentExtension{static_cast<int32_t>(0x15)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::SimpleContent{static_cast<int32_t>(0x16)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::SimpleContentExtension{static_cast<int32_t>(0x17)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::SimpleContentRestriction{static_cast<int32_t>(0x18)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::SimpleTypeUnion{static_cast<int32_t>(0x19)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::SimpleTypeList{static_cast<int32_t>(0x1a)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::SimpleTypeRestriction{static_cast<int32_t>(0x1b)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Unique{static_cast<int32_t>(0x1c)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Key{static_cast<int32_t>(0x1d)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::KeyRef{static_cast<int32_t>(0x1e)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Selector{static_cast<int32_t>(0x1f)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Field{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::MinExclusive{static_cast<int32_t>(0x21)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::MinInclusive{static_cast<int32_t>(0x22)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::MaxExclusive{static_cast<int32_t>(0x23)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::MaxInclusive{static_cast<int32_t>(0x24)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::TotalDigits{static_cast<int32_t>(0x25)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::FractionDigits{static_cast<int32_t>(0x26)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Length{static_cast<int32_t>(0x27)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::MinLength{static_cast<int32_t>(0x28)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::MaxLength{static_cast<int32_t>(0x29)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Enumeration{static_cast<int32_t>(0x2a)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Pattern{static_cast<int32_t>(0x2b)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::WhiteSpace{static_cast<int32_t>(0x2c)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::AppInfo{static_cast<int32_t>(0x2d)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Documentation{static_cast<int32_t>(0x2e)};
constexpr ::GlobalNamespace::XsdBuilder_State  GlobalNamespace::XsdBuilder_State::Redefine{static_cast<int32_t>(0x2f)};
