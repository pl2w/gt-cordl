#pragma once
// IWYU pragma private; include "Pathfinding/PathNNConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
CORDL_MODULE_EXPORT(PathNNConstraint)
namespace Pathfinding {
class GraphNode;
}
// Forward declare root types
namespace Pathfinding {
class PathNNConstraint;
}
// Write type traits
MARK_REF_T(::Pathfinding::PathNNConstraint*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathNNConstraint*, "Pathfinding", "PathNNConstraint");
// Dependencies Pathfinding.NNConstraint
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathNNConstraint
class CORDL_TYPE PathNNConstraint : public ::Pathfinding::NNConstraint {
public:
// Declarations
static inline ::Pathfinding::PathNNConstraint* New_ctor() ;

/// @brief Method SetStart, addr 0x5e482e4, size 0x2c, virtual true, abstract: false, final false
inline void SetStart(::Pathfinding::GraphNode*  node) ;

/// @brief Method .ctor, addr 0x5e482b8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Default, addr 0x5e4823c, size 0x7c, virtual false, abstract: false, final false
static inline ::Pathfinding::PathNNConstraint* get_Default() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathNNConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathNNConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathNNConstraint(PathNNConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathNNConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathNNConstraint(PathNNConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21192};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::PathNNConstraint) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
