#pragma once
// IWYU pragma private; include "Pathfinding/ITraversalProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITraversalProvider)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class Path;
}
// Forward declare root types
namespace Pathfinding {
class ITraversalProvider;
}
// Write type traits
MARK_REF_T(::Pathfinding::ITraversalProvider*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ITraversalProvider*, "Pathfinding", "ITraversalProvider");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ITraversalProvider
class CORDL_TYPE ITraversalProvider {
public:
// Declarations
/// @brief Method CanTraverse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanTraverse(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node) ;

/// @brief Method GetTraversalCost, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline uint32_t GetTraversalCost(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "ITraversalProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITraversalProvider(ITraversalProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21276};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
