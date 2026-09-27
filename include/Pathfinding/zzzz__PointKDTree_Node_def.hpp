#pragma once
// IWYU pragma private; include "Pathfinding/PointKDTree_Node.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointKDTree_Node)
namespace Pathfinding {
class GraphNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct PointKDTree_Node;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointKDTree_Node);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointKDTree_Node, "Pathfinding", "PointKDTree/Node");
// Dependencies Pathfinding.GraphNode
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.PointKDTree/Node
struct CORDL_TYPE PointKDTree_Node {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PointKDTree_Node() ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<::Pathfinding::GraphNode*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "split", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitAxis", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr PointKDTree_Node(::ArrayW<::Pathfinding::GraphNode*>  data, int32_t  split, uint16_t  count, uint8_t  splitAxis) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21349};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field data, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::GraphNode*>  data;

/// @brief Field split, offset: 0x8, size: 0x4, def value: None
 int32_t  split;

/// @brief Field count, offset: 0xc, size: 0x2, def value: None
 uint16_t  count;

/// @brief Field splitAxis, offset: 0xe, size: 0x1, def value: None
 uint8_t  splitAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointKDTree_Node, data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointKDTree_Node, split) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointKDTree_Node, count) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointKDTree_Node, splitAxis) == 0xe, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointKDTree_Node) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
