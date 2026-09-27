#pragma once
// IWYU pragma private; include "Pathfinding/NNInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NNInfoInternal)
namespace Pathfinding {
class GraphNode;
}
// Forward declare root types
namespace Pathfinding {
struct NNInfoInternal;
}
// Write type traits
MARK_VAL_T(::Pathfinding::NNInfoInternal);
DEFINE_IL2CPP_CLASS(::Pathfinding::NNInfoInternal, "Pathfinding", "NNInfoInternal");
// Dependencies UnityEngine.Vector3
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.NNInfoInternal
struct CORDL_TYPE NNInfoInternal {
public:
// Declarations
/// @brief Method UpdateInfo, addr 0x5e48398, size 0xd0, virtual false, abstract: false, final false
inline void UpdateInfo() ;

/// @brief Method .ctor, addr 0x5e48310, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::GraphNode*  node) ;

// Ctor Parameters []
// @brief default ctor
constexpr NNInfoInternal() ;

// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "constrainedNode", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "clampedPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "constClampedPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr NNInfoInternal(::Pathfinding::GraphNode*  node, ::Pathfinding::GraphNode*  constrainedNode, ::UnityEngine::Vector3  clampedPosition, ::UnityEngine::Vector3  constClampedPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21193};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field node, offset: 0x0, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  node;

/// @brief Field constrainedNode, offset: 0x8, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  constrainedNode;

/// @brief Field clampedPosition, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  clampedPosition;

/// @brief Field constClampedPosition, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  constClampedPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NNInfoInternal, node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNInfoInternal, constrainedNode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNInfoInternal, clampedPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNInfoInternal, constClampedPosition) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NNInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
