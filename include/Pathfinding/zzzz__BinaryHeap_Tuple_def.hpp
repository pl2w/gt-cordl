#pragma once
// IWYU pragma private; include "Pathfinding/BinaryHeap_Tuple.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryHeap_Tuple)
namespace Pathfinding {
class PathNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct BinaryHeap_Tuple;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BinaryHeap_Tuple);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BinaryHeap_Tuple, "Pathfinding", "BinaryHeap/Tuple");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.BinaryHeap/Tuple
struct CORDL_TYPE BinaryHeap_Tuple {
public:
// Declarations
/// @brief Method .ctor, addr 0x5e574a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  f, ::Pathfinding::PathNode*  node) ;

// Ctor Parameters []
// @brief default ctor
constexpr BinaryHeap_Tuple() ;

// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::PathNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "F", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr BinaryHeap_Tuple(::Pathfinding::PathNode*  node, uint32_t  F) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21241};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field node, offset: 0x0, size: 0x8, def value: None
 ::Pathfinding::PathNode*  node;

/// @brief Field F, offset: 0x8, size: 0x4, def value: None
 uint32_t  F;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BinaryHeap_Tuple, node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BinaryHeap_Tuple, F) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BinaryHeap_Tuple) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
