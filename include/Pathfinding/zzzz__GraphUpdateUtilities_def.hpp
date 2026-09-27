#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GraphUpdateUtilities)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GraphUpdateObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding {
class GraphUpdateUtilities;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphUpdateUtilities*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphUpdateUtilities*, "Pathfinding", "GraphUpdateUtilities");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphUpdateUtilities
class CORDL_TYPE GraphUpdateUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method UpdateGraphsNoBlock, addr 0x5eb7e4c, size 0x1a0, virtual false, abstract: false, final false
static inline bool UpdateGraphsNoBlock(::Pathfinding::GraphUpdateObject*  guo, ::Pathfinding::GraphNode*  node1, ::Pathfinding::GraphNode*  node2, bool  alwaysRevert) ;

/// @brief Method UpdateGraphsNoBlock, addr 0x5eb7fec, size 0x2a4, virtual false, abstract: false, final false
static inline bool UpdateGraphsNoBlock(::Pathfinding::GraphUpdateObject*  guo, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, bool  alwaysRevert) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphUpdateUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphUpdateUtilities(GraphUpdateUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphUpdateUtilities(GraphUpdateUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::GraphUpdateUtilities) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
