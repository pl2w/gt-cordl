#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TriangulationConstraint)
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class TriangulationConstraint;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::TriangulationConstraint*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::TriangulationConstraint*, "Pathfinding.Poly2Tri", "TriangulationConstraint");
// Dependencies System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.TriangulationConstraint
class CORDL_TYPE TriangulationConstraint : public ::System::Object {
public:
// Declarations
/// @brief Field P, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_P, put=__cordl_internal_set_P)) ::Pathfinding::Poly2Tri::TriangulationPoint*  P;

/// @brief Field Q, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Q, put=__cordl_internal_set_Q)) ::Pathfinding::Poly2Tri::TriangulationPoint*  Q;

static inline ::Pathfinding::Poly2Tri::TriangulationConstraint* New_ctor() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& __cordl_internal_get_P() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& __cordl_internal_get_P() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& __cordl_internal_get_Q() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& __cordl_internal_get_Q() ;

constexpr void __cordl_internal_set_P(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

constexpr void __cordl_internal_set_Q(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

/// @brief Method .ctor, addr 0xa6b5b14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriangulationConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriangulationConstraint(TriangulationConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriangulationConstraint(TriangulationConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32344};

/// @brief Field P, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationPoint*  ___P;

/// @brief Field Q, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationPoint*  ___Q;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationConstraint, ___P) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationConstraint, ___Q) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::TriangulationConstraint) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
