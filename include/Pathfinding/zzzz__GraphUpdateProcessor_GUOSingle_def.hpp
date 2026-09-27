#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateProcessor_GUOSingle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphUpdateProcessor_GraphUpdateOrder_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GraphUpdateProcessor_GUOSingle)
namespace Pathfinding {
class GraphUpdateObject;
}
namespace Pathfinding {
class IUpdatableGraph;
}
// Forward declare root types
namespace GlobalNamespace {
struct GraphUpdateProcessor_GUOSingle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GraphUpdateProcessor_GUOSingle);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GraphUpdateProcessor_GUOSingle, "Pathfinding", "GraphUpdateProcessor/GUOSingle");
// Dependencies Pathfinding.GraphUpdateProcessor::GraphUpdateOrder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.GraphUpdateProcessor/GUOSingle
struct CORDL_TYPE GraphUpdateProcessor_GUOSingle {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GraphUpdateProcessor_GUOSingle() ;

// Ctor Parameters [CppParam { name: "order", ty: "::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder", modifiers: "", def_value: None, comment: None }, CppParam { name: "graph", ty: "::Pathfinding::IUpdatableGraph*", modifiers: "", def_value: None, comment: None }, CppParam { name: "obj", ty: "::Pathfinding::GraphUpdateObject*", modifiers: "", def_value: None, comment: None }]
constexpr GraphUpdateProcessor_GUOSingle(::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder  order, ::Pathfinding::IUpdatableGraph*  graph, ::Pathfinding::GraphUpdateObject*  obj) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21247};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field order, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder  order;

/// @brief Field graph, offset: 0x8, size: 0x8, def value: None
 ::Pathfinding::IUpdatableGraph*  graph;

/// @brief Field obj, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::GraphUpdateObject*  obj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphUpdateProcessor_GUOSingle, order) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphUpdateProcessor_GUOSingle, graph) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphUpdateProcessor_GUOSingle, obj) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GraphUpdateProcessor_GUOSingle) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
