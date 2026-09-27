#pragma once
// IWYU pragma private; include "Pathfinding/IWorkItemContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWorkItemContext)
namespace Pathfinding {
class NavGraph;
}
// Forward declare root types
namespace Pathfinding {
class IWorkItemContext;
}
// Write type traits
MARK_REF_T(::Pathfinding::IWorkItemContext*);
DEFINE_IL2CPP_CLASS(::Pathfinding::IWorkItemContext*, "Pathfinding", "IWorkItemContext");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.IWorkItemContext
class CORDL_TYPE IWorkItemContext {
public:
// Declarations
/// @brief Method EnsureValidFloodFill, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EnsureValidFloodFill() ;

/// [Obsolete("Avoid using. This will force a full recalculation of the connected components. In most cases the HierarchicalGraph class takes care of things automatically behind the scenes now. In pretty much all cases you should be able to remove the call to this function.")]
/// @brief Method QueueFloodFill, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void QueueFloodFill() ;

/// @brief Method SetGraphDirty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetGraphDirty(::Pathfinding::NavGraph*  graph) ;

// Ctor Parameters [CppParam { name: "", ty: "IWorkItemContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWorkItemContext(IWorkItemContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
