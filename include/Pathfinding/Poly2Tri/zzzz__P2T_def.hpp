#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/P2T.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Poly2Tri/zzzz__TriangulationAlgorithm_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(P2T)
namespace Pathfinding::Poly2Tri {
class Polygon;
}
namespace Pathfinding::Poly2Tri {
class Triangulatable;
}
namespace Pathfinding::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace Pathfinding::Poly2Tri {
class TriangulationContext;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class P2T;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::P2T*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::P2T*, "Pathfinding.Poly2Tri", "P2T");
// Dependencies Pathfinding.Poly2Tri.TriangulationAlgorithm, System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.P2T
class CORDL_TYPE P2T : public ::System::Object {
public:
// Declarations
/// @brief Field _defaultAlgorithm, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__defaultAlgorithm, put=setStaticF__defaultAlgorithm)) ::Pathfinding::Poly2Tri::TriangulationAlgorithm  _defaultAlgorithm;

/// @brief Method CreateContext, addr 0xa6b0078, size 0x50, virtual false, abstract: false, final false
static inline ::Pathfinding::Poly2Tri::TriangulationContext* CreateContext(::Pathfinding::Poly2Tri::TriangulationAlgorithm  algorithm) ;

/// @brief Method Triangulate, addr 0xa6b003c, size 0x3c, virtual false, abstract: false, final false
static inline void Triangulate(::Pathfinding::Poly2Tri::TriangulationAlgorithm  algorithm, ::Pathfinding::Poly2Tri::Triangulatable*  t) ;

/// @brief Method Triangulate, addr 0xa6affec, size 0x50, virtual false, abstract: false, final false
static inline void Triangulate(::Pathfinding::Poly2Tri::Polygon*  p) ;

/// @brief Method Triangulate, addr 0xa6b01c4, size 0x90, virtual false, abstract: false, final false
static inline void Triangulate(::Pathfinding::Poly2Tri::TriangulationContext*  tcx) ;

static inline ::Pathfinding::Poly2Tri::TriangulationAlgorithm getStaticF__defaultAlgorithm() ;

static inline void setStaticF__defaultAlgorithm(::Pathfinding::Poly2Tri::TriangulationAlgorithm  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr P2T() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "P2T", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
P2T(P2T && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "P2T", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
P2T(P2T const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32327};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Poly2Tri::P2T) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
