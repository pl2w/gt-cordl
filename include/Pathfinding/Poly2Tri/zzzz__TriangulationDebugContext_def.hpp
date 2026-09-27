#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationDebugContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TriangulationDebugContext)
namespace Pathfinding::Poly2Tri {
class TriangulationContext;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class TriangulationDebugContext;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::TriangulationDebugContext*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::TriangulationDebugContext*, "Pathfinding.Poly2Tri", "TriangulationDebugContext");
// Dependencies System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.TriangulationDebugContext
class CORDL_TYPE TriangulationDebugContext : public ::System::Object {
public:
// Declarations
/// @brief Field _tcx, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__tcx, put=__cordl_internal_set__tcx)) ::Pathfinding::Poly2Tri::TriangulationContext*  _tcx;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Clear() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationContext* const& __cordl_internal_get__tcx() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationContext*& __cordl_internal_get__tcx() ;

constexpr void __cordl_internal_set__tcx(::Pathfinding::Poly2Tri::TriangulationContext*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriangulationDebugContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriangulationDebugContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriangulationDebugContext(TriangulationDebugContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationDebugContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriangulationDebugContext(TriangulationDebugContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32346};

/// @brief Field _tcx, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationContext*  ____tcx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationDebugContext, ____tcx) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::TriangulationDebugContext) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
