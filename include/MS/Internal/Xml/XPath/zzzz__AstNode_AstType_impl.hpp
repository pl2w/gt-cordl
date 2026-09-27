#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/AstNode_AstType.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_AstType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AstNode_AstType::AstNode_AstType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstNode_AstType::AstNode_AstType()   {
}
constexpr ::GlobalNamespace::AstNode_AstType  GlobalNamespace::AstNode_AstType::Axis{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AstNode_AstType  GlobalNamespace::AstNode_AstType::Operator{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AstNode_AstType  GlobalNamespace::AstNode_AstType::Filter{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AstNode_AstType  GlobalNamespace::AstNode_AstType::ConstantOperand{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::AstNode_AstType  GlobalNamespace::AstNode_AstType::Function{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::AstNode_AstType  GlobalNamespace::AstNode_AstType::Group{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::AstNode_AstType  GlobalNamespace::AstNode_AstType::Root{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::AstNode_AstType  GlobalNamespace::AstNode_AstType::Variable{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::AstNode_AstType  GlobalNamespace::AstNode_AstType::Error{static_cast<int32_t>(0x8)};
