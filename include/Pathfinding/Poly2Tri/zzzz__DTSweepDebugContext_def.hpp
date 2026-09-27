#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepDebugContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Poly2Tri/zzzz__TriangulationDebugContext_def.hpp"
CORDL_MODULE_EXPORT(DTSweepDebugContext)
namespace Pathfinding::Poly2Tri {
class AdvancingFrontNode;
}
namespace Pathfinding::Poly2Tri {
class DTSweepConstraint;
}
namespace Pathfinding::Poly2Tri {
class DelaunayTriangle;
}
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class DTSweepDebugContext;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::DTSweepDebugContext*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::DTSweepDebugContext*, "Pathfinding.Poly2Tri", "DTSweepDebugContext");
// Dependencies Pathfinding.Poly2Tri.TriangulationDebugContext
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.DTSweepDebugContext
class CORDL_TYPE DTSweepDebugContext : public ::Pathfinding::Poly2Tri::TriangulationDebugContext {
public:
// Declarations
 __declspec(property(put=set_ActiveConstraint)) ::Pathfinding::Poly2Tri::DTSweepConstraint*  ActiveConstraint;

 __declspec(property(put=set_ActiveNode)) ::Pathfinding::Poly2Tri::AdvancingFrontNode*  ActiveNode;

 __declspec(property(put=set_ActivePoint)) ::Pathfinding::Poly2Tri::TriangulationPoint*  ActivePoint;

 __declspec(property(put=set_PrimaryTriangle)) ::Pathfinding::Poly2Tri::DelaunayTriangle*  PrimaryTriangle;

 __declspec(property(put=set_SecondaryTriangle)) ::Pathfinding::Poly2Tri::DelaunayTriangle*  SecondaryTriangle;

/// @brief Field _activeConstraint, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeConstraint, put=__cordl_internal_set__activeConstraint)) ::Pathfinding::Poly2Tri::DTSweepConstraint*  _activeConstraint;

/// @brief Field _activeNode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeNode, put=__cordl_internal_set__activeNode)) ::Pathfinding::Poly2Tri::AdvancingFrontNode*  _activeNode;

/// @brief Field _activePoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__activePoint, put=__cordl_internal_set__activePoint)) ::Pathfinding::Poly2Tri::TriangulationPoint*  _activePoint;

/// @brief Field _primaryTriangle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__primaryTriangle, put=__cordl_internal_set__primaryTriangle)) ::Pathfinding::Poly2Tri::DelaunayTriangle*  _primaryTriangle;

/// @brief Field _secondaryTriangle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondaryTriangle, put=__cordl_internal_set__secondaryTriangle)) ::Pathfinding::Poly2Tri::DelaunayTriangle*  _secondaryTriangle;

/// @brief Method Clear, addr 0xa6b63b8, size 0x44, virtual true, abstract: false, final false
inline void Clear() ;

constexpr ::Pathfinding::Poly2Tri::DTSweepConstraint* const& __cordl_internal_get__activeConstraint() const;

constexpr ::Pathfinding::Poly2Tri::DTSweepConstraint*& __cordl_internal_get__activeConstraint() ;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& __cordl_internal_get__activeNode() const;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get__activeNode() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& __cordl_internal_get__activePoint() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& __cordl_internal_get__activePoint() ;

constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle* const& __cordl_internal_get__primaryTriangle() const;

constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle*& __cordl_internal_get__primaryTriangle() ;

constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle* const& __cordl_internal_get__secondaryTriangle() const;

constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle*& __cordl_internal_get__secondaryTriangle() ;

constexpr void __cordl_internal_set__activeConstraint(::Pathfinding::Poly2Tri::DTSweepConstraint*  value) ;

constexpr void __cordl_internal_set__activeNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr void __cordl_internal_set__activePoint(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

constexpr void __cordl_internal_set__primaryTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value) ;

constexpr void __cordl_internal_set__secondaryTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value) ;

/// @brief Method set_ActiveConstraint, addr 0xa6b2e18, size 0x58, virtual false, abstract: false, final false
inline void set_ActiveConstraint(::Pathfinding::Poly2Tri::DTSweepConstraint*  value) ;

/// @brief Method set_ActiveNode, addr 0xa6b3828, size 0x58, virtual false, abstract: false, final false
inline void set_ActiveNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value) ;

/// @brief Method set_ActivePoint, addr 0xa6b6360, size 0x58, virtual false, abstract: false, final false
inline void set_ActivePoint(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

/// @brief Method set_PrimaryTriangle, addr 0xa6b404c, size 0x58, virtual false, abstract: false, final false
inline void set_PrimaryTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value) ;

/// @brief Method set_SecondaryTriangle, addr 0xa6b5044, size 0x58, virtual false, abstract: false, final false
inline void set_SecondaryTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DTSweepDebugContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DTSweepDebugContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DTSweepDebugContext(DTSweepDebugContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepDebugContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DTSweepDebugContext(DTSweepDebugContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32337};

/// @brief Field _primaryTriangle, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::DelaunayTriangle*  ____primaryTriangle;

/// @brief Field _secondaryTriangle, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::DelaunayTriangle*  ____secondaryTriangle;

/// @brief Field _activePoint, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationPoint*  ____activePoint;

/// @brief Field _activeNode, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::AdvancingFrontNode*  ____activeNode;

/// @brief Field _activeConstraint, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::DTSweepConstraint*  ____activeConstraint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepDebugContext, ____primaryTriangle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepDebugContext, ____secondaryTriangle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepDebugContext, ____activePoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepDebugContext, ____activeNode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepDebugContext, ____activeConstraint) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::DTSweepDebugContext) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
