#pragma once
// IWYU pragma private; include "Pathfinding/FloodPathConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
CORDL_MODULE_EXPORT(FloodPathConstraint)
namespace Pathfinding {
class FloodPath;
}
namespace Pathfinding {
class GraphNode;
}
// Forward declare root types
namespace Pathfinding {
class FloodPathConstraint;
}
// Write type traits
MARK_REF_T(::Pathfinding::FloodPathConstraint*);
DEFINE_IL2CPP_CLASS(::Pathfinding::FloodPathConstraint*, "Pathfinding", "FloodPathConstraint");
// Dependencies Pathfinding.NNConstraint
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.FloodPathConstraint
class CORDL_TYPE FloodPathConstraint : public ::Pathfinding::NNConstraint {
public:
// Declarations
/// @brief Field path, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::FloodPath*  path;

static inline ::Pathfinding::FloodPathConstraint* New_ctor(::Pathfinding::FloodPath*  path) ;

/// @brief Method Suitable, addr 0x5eaed64, size 0x48, virtual true, abstract: false, final false
inline bool Suitable(::Pathfinding::GraphNode*  node) ;

constexpr ::Pathfinding::FloodPath* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::FloodPath*& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set_path(::Pathfinding::FloodPath*  value) ;

/// @brief Method .ctor, addr 0x5eaecd4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::FloodPath*  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloodPathConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloodPathConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloodPathConstraint(FloodPathConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloodPathConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloodPathConstraint(FloodPathConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21394};

/// @brief Field path, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::FloodPath*  ___path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::FloodPathConstraint, ___path) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::FloodPathConstraint) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
