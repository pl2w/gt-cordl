#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Poly2Tri/zzzz__TriangulationConstraint_def.hpp"
CORDL_MODULE_EXPORT(DTSweepConstraint)
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class DTSweepConstraint;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::DTSweepConstraint*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::DTSweepConstraint*, "Pathfinding.Poly2Tri", "DTSweepConstraint");
// Dependencies Pathfinding.Poly2Tri.TriangulationConstraint
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.DTSweepConstraint
class CORDL_TYPE DTSweepConstraint : public ::Pathfinding::Poly2Tri::TriangulationConstraint {
public:
// Declarations
static inline ::Pathfinding::Poly2Tri::DTSweepConstraint* New_ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2) ;

/// @brief Method .ctor, addr 0xa6b5a60, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DTSweepConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DTSweepConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DTSweepConstraint(DTSweepConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DTSweepConstraint(DTSweepConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Poly2Tri::DTSweepConstraint) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
