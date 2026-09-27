#pragma once
// IWYU pragma private; include "Pathfinding/ITransformedGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITransformedGraph)
namespace Pathfinding::Util {
class GraphTransform;
}
// Forward declare root types
namespace Pathfinding {
class ITransformedGraph;
}
// Write type traits
MARK_REF_T(::Pathfinding::ITransformedGraph*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ITransformedGraph*, "Pathfinding", "ITransformedGraph");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ITransformedGraph
class CORDL_TYPE ITransformedGraph {
public:
// Declarations
 __declspec(property(get=get_transform)) ::Pathfinding::Util::GraphTransform*  transform;

/// @brief Method get_transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::Util::GraphTransform* get_transform() ;

// Ctor Parameters [CppParam { name: "", ty: "ITransformedGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITransformedGraph(ITransformedGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21199};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
