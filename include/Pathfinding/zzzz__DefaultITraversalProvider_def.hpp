#pragma once
// IWYU pragma private; include "Pathfinding/DefaultITraversalProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultITraversalProvider)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class Path;
}
// Forward declare root types
namespace Pathfinding {
class DefaultITraversalProvider;
}
// Write type traits
MARK_REF_T(::Pathfinding::DefaultITraversalProvider*);
DEFINE_IL2CPP_CLASS(::Pathfinding::DefaultITraversalProvider*, "Pathfinding", "DefaultITraversalProvider");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.DefaultITraversalProvider
class CORDL_TYPE DefaultITraversalProvider : public ::System::Object {
public:
// Declarations
/// @brief Method CanTraverse, addr 0x5e68cf8, size 0x38, virtual false, abstract: false, final false
static inline bool CanTraverse(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node) ;

/// @brief Method GetTraversalCost, addr 0x5e68d30, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetTraversalCost(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultITraversalProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultITraversalProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultITraversalProvider(DefaultITraversalProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultITraversalProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultITraversalProvider(DefaultITraversalProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::DefaultITraversalProvider) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
