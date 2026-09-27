#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CellTreeNode_ENodeType.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_ENodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CellTreeNode_ENodeType::CellTreeNode_ENodeType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CellTreeNode_ENodeType::CellTreeNode_ENodeType()   {
}
constexpr ::GlobalNamespace::CellTreeNode_ENodeType  GlobalNamespace::CellTreeNode_ENodeType::Root{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::CellTreeNode_ENodeType  GlobalNamespace::CellTreeNode_ENodeType::Node{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::CellTreeNode_ENodeType  GlobalNamespace::CellTreeNode_ENodeType::Leaf{static_cast<uint8_t>(0x2u)};
