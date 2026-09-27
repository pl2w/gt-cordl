#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/PointOnEdgeException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__NotImplementedException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PointOnEdgeException)
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class PointOnEdgeException;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::PointOnEdgeException*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::PointOnEdgeException*, "Pathfinding.Poly2Tri", "PointOnEdgeException");
// Dependencies System.NotImplementedException
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.PointOnEdgeException
class CORDL_TYPE PointOnEdgeException : public ::System::NotImplementedException {
public:
// Declarations
/// @brief Field A, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_A, put=__cordl_internal_set_A)) ::Pathfinding::Poly2Tri::TriangulationPoint*  A;

/// @brief Field B, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_B, put=__cordl_internal_set_B)) ::Pathfinding::Poly2Tri::TriangulationPoint*  B;

/// @brief Field C, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_C, put=__cordl_internal_set_C)) ::Pathfinding::Poly2Tri::TriangulationPoint*  C;

static inline ::Pathfinding::Poly2Tri::PointOnEdgeException* New_ctor(::StringW  message, ::Pathfinding::Poly2Tri::TriangulationPoint*  a, ::Pathfinding::Poly2Tri::TriangulationPoint*  b, ::Pathfinding::Poly2Tri::TriangulationPoint*  c) ;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& __cordl_internal_get_A() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& __cordl_internal_get_A() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& __cordl_internal_get_B() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& __cordl_internal_get_B() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& __cordl_internal_get_C() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& __cordl_internal_get_C() ;

constexpr void __cordl_internal_set_A(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

constexpr void __cordl_internal_set_B(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

constexpr void __cordl_internal_set_C(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

/// @brief Method .ctor, addr 0xa6b4be8, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::Pathfinding::Poly2Tri::TriangulationPoint*  a, ::Pathfinding::Poly2Tri::TriangulationPoint*  b, ::Pathfinding::Poly2Tri::TriangulationPoint*  c) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointOnEdgeException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointOnEdgeException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointOnEdgeException(PointOnEdgeException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointOnEdgeException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointOnEdgeException(PointOnEdgeException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32340};

/// @brief Field A, offset: 0x90, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationPoint*  ___A;

/// @brief Field B, offset: 0x98, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationPoint*  ___B;

/// @brief Field C, offset: 0xa0, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationPoint*  ___C;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::PointOnEdgeException, ___A) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::PointOnEdgeException, ___B) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::PointOnEdgeException, ___C) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::PointOnEdgeException) == 0xa8, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
