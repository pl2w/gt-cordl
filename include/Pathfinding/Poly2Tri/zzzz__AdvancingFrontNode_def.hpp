#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/AdvancingFrontNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdvancingFrontNode)
namespace Pathfinding::Poly2Tri {
class DelaunayTriangle;
}
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class AdvancingFrontNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::AdvancingFrontNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::AdvancingFrontNode*, "Pathfinding.Poly2Tri", "AdvancingFrontNode");
// Dependencies System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.AdvancingFrontNode
class CORDL_TYPE AdvancingFrontNode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HasNext)) bool  HasNext;

 __declspec(property(get=get_HasPrev)) bool  HasPrev;

/// @brief Field Next, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Pathfinding::Poly2Tri::AdvancingFrontNode*  Next;

/// @brief Field Point, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Point, put=__cordl_internal_set_Point)) ::Pathfinding::Poly2Tri::TriangulationPoint*  Point;

/// @brief Field Prev, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::Pathfinding::Poly2Tri::AdvancingFrontNode*  Prev;

/// @brief Field Triangle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Triangle, put=__cordl_internal_set_Triangle)) ::Pathfinding::Poly2Tri::DelaunayTriangle*  Triangle;

/// @brief Field Value, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) double_t  Value;

static inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* New_ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& __cordl_internal_get_Next() const;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Next() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& __cordl_internal_get_Point() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& __cordl_internal_get_Point() ;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& __cordl_internal_get_Prev() const;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Prev() ;

constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle* const& __cordl_internal_get_Triangle() const;

constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle*& __cordl_internal_get_Triangle() ;

constexpr double_t const& __cordl_internal_get_Value() const;

constexpr double_t& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_Next(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr void __cordl_internal_set_Point(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

constexpr void __cordl_internal_set_Prev(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr void __cordl_internal_set_Triangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value) ;

constexpr void __cordl_internal_set_Value(double_t  value) ;

/// @brief Method .ctor, addr 0xa6b2434, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method get_HasNext, addr 0xa6b2478, size 0x10, virtual false, abstract: false, final false
inline bool get_HasNext() ;

/// @brief Method get_HasPrev, addr 0xa6b2488, size 0x10, virtual false, abstract: false, final false
inline bool get_HasPrev() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdvancingFrontNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFrontNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancingFrontNode(AdvancingFrontNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFrontNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancingFrontNode(AdvancingFrontNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32332};

/// @brief Field Next, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::AdvancingFrontNode*  ___Next;

/// @brief Field Prev, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::AdvancingFrontNode*  ___Prev;

/// @brief Field Value, offset: 0x20, size: 0x8, def value: None
 double_t  ___Value;

/// @brief Field Point, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationPoint*  ___Point;

/// @brief Field Triangle, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::DelaunayTriangle*  ___Triangle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::AdvancingFrontNode, ___Next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::AdvancingFrontNode, ___Prev) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::AdvancingFrontNode, ___Value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::AdvancingFrontNode, ___Point) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::AdvancingFrontNode, ___Triangle) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::AdvancingFrontNode) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
