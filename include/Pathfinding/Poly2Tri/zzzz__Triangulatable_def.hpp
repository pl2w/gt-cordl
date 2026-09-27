#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/Triangulatable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(Triangulatable)
namespace Pathfinding::Poly2Tri {
class DelaunayTriangle;
}
namespace Pathfinding::Poly2Tri {
class TriangulationContext;
}
namespace Pathfinding::Poly2Tri {
struct TriangulationMode;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class Triangulatable;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::Triangulatable*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::Triangulatable*, "Pathfinding.Poly2Tri", "Triangulatable");
// Dependencies 
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.Triangulatable
class CORDL_TYPE Triangulatable {
public:
// Declarations
 __declspec(property(get=get_TriangulationMode)) ::Pathfinding::Poly2Tri::TriangulationMode  TriangulationMode;

/// @brief Method AddTriangle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  t) ;

/// @brief Method AddTriangles, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddTriangles(::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  list) ;

/// @brief Method Prepare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Prepare(::Pathfinding::Poly2Tri::TriangulationContext*  tcx) ;

/// @brief Method get_TriangulationMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::Poly2Tri::TriangulationMode get_TriangulationMode() ;

// Ctor Parameters [CppParam { name: "", ty: "Triangulatable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Triangulatable(Triangulatable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32342};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Poly2Tri
