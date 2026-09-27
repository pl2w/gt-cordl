#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Operator_Op.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operator_Op_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Operator_Op::Operator_Op(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Operator_Op::Operator_Op()   {
}
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::INVALID{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::OR{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::AND{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::EQ{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::NE{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::LT{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::LE{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::GT{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::GE{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::PLUS{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::MINUS{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::MUL{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::DIV{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::MOD{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::Operator_Op  GlobalNamespace::Operator_Op::UNION{static_cast<int32_t>(0xe)};
