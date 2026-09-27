#pragma once
// IWYU pragma private; include "Pathfinding/PointKDTree_Node.hpp"
#include "Pathfinding/zzzz__GraphNode_impl.hpp"
#include "Pathfinding/zzzz__PointKDTree_Node_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<::Pathfinding::GraphNode*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "split", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitAxis", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PointKDTree_Node::PointKDTree_Node(::ArrayW<::Pathfinding::GraphNode*>  data, int32_t  split, uint16_t  count, uint8_t  splitAxis) noexcept  {
this->data = data;
this->split = split;
this->count = count;
this->splitAxis = splitAxis;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointKDTree_Node::PointKDTree_Node()   {
}
