#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateProcessor_GUOSingle.hpp"
#include "Pathfinding/zzzz__GraphUpdateProcessor_GraphUpdateOrder_impl.hpp"
#include "Pathfinding/zzzz__GraphUpdateProcessor_GUOSingle_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__IUpdatableGraph_def.hpp"
// Ctor Parameters [CppParam { name: "order", ty: "::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graph", ty: "::Pathfinding::IUpdatableGraph*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "obj", ty: "::Pathfinding::GraphUpdateObject*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GraphUpdateProcessor_GUOSingle::GraphUpdateProcessor_GUOSingle(::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder  order, ::Pathfinding::IUpdatableGraph*  graph, ::Pathfinding::GraphUpdateObject*  obj) noexcept  {
this->order = order;
this->graph = graph;
this->obj = obj;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphUpdateProcessor_GUOSingle::GraphUpdateProcessor_GUOSingle()   {
}
