#pragma once
// IWYU pragma private; include "Pathfinding/IUpdatableGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUpdatableGraph)
namespace Pathfinding {
class GraphUpdateObject;
}
namespace Pathfinding {
struct GraphUpdateThreading;
}
// Forward declare root types
namespace Pathfinding {
class IUpdatableGraph;
}
// Write type traits
MARK_REF_T(::Pathfinding::IUpdatableGraph*);
DEFINE_IL2CPP_CLASS(::Pathfinding::IUpdatableGraph*, "Pathfinding", "IUpdatableGraph");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.IUpdatableGraph
class CORDL_TYPE IUpdatableGraph {
public:
// Declarations
/// @brief Method CanUpdateAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::GraphUpdateThreading CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method UpdateArea, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateArea(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method UpdateAreaInit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method UpdateAreaPost, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateAreaPost(::Pathfinding::GraphUpdateObject*  o) ;

// Ctor Parameters [CppParam { name: "", ty: "IUpdatableGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUpdatableGraph(IUpdatableGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21196};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
