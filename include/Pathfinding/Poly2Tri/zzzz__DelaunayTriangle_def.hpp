#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DelaunayTriangle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Poly2Tri/zzzz__FixedArray3_1_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__FixedBitArray3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DelaunayTriangle)
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class DelaunayTriangle;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::DelaunayTriangle*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::DelaunayTriangle*, "Pathfinding.Poly2Tri", "DelaunayTriangle");
// Dependencies Pathfinding.Poly2Tri.FixedArray3`1<T>, Pathfinding.Poly2Tri.FixedBitArray3, System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.DelaunayTriangle
class CORDL_TYPE DelaunayTriangle : public ::System::Object {
public:
// Declarations
/// @brief Field EdgeIsConstrained, offset 0x40, size 0x3 
 __declspec(property(get=__cordl_internal_get_EdgeIsConstrained, put=__cordl_internal_set_EdgeIsConstrained)) ::Pathfinding::Poly2Tri::FixedBitArray3  EdgeIsConstrained;

/// @brief Field EdgeIsDelaunay, offset 0x43, size 0x3 
 __declspec(property(get=__cordl_internal_get_EdgeIsDelaunay, put=__cordl_internal_set_EdgeIsDelaunay)) ::Pathfinding::Poly2Tri::FixedBitArray3  EdgeIsDelaunay;

 __declspec(property(get=get_IsInterior, put=set_IsInterior)) bool  IsInterior;

/// @brief Field Neighbors, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_Neighbors, put=__cordl_internal_set_Neighbors)) ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>  Neighbors;

/// @brief Field Points, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_Points, put=__cordl_internal_set_Points)) ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*>  Points;

/// @brief Field <IsInterior>k__BackingField, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInterior_k__BackingField, put=__cordl_internal_set__IsInterior_k__BackingField)) bool  _IsInterior_k__BackingField;

/// @brief Method Contains, addr 0xa6b1498, size 0x58, virtual false, abstract: false, final false
inline bool Contains(::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method EdgeIndex, addr 0xa6b15b4, size 0xcc, virtual false, abstract: false, final false
inline int32_t EdgeIndex(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2) ;

/// @brief Method GetConstrainedEdgeCCW, addr 0xa6b1ee8, size 0x3c, virtual false, abstract: false, final false
inline bool GetConstrainedEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method GetConstrainedEdgeCW, addr 0xa6b1f84, size 0x3c, virtual false, abstract: false, final false
inline bool GetConstrainedEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method GetDelaunayEdgeCCW, addr 0xa6b2058, size 0x3c, virtual false, abstract: false, final false
inline bool GetDelaunayEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method GetDelaunayEdgeCW, addr 0xa6b2094, size 0x3c, virtual false, abstract: false, final false
inline bool GetDelaunayEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method IndexCCWFrom, addr 0xa6b1464, size 0x34, virtual false, abstract: false, final false
inline int32_t IndexCCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method IndexOf, addr 0xa6b13b8, size 0xac, virtual false, abstract: false, final false
inline int32_t IndexOf(::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method Legalize, addr 0xa6b1bd8, size 0x94, virtual false, abstract: false, final false
inline void Legalize(::Pathfinding::Poly2Tri::TriangulationPoint*  oPoint, ::Pathfinding::Poly2Tri::TriangulationPoint*  nPoint) ;

/// @brief Method MarkConstrainedEdge, addr 0xa6b1e48, size 0xc, virtual false, abstract: false, final false
inline void MarkConstrainedEdge(int32_t  index) ;

/// @brief Method MarkConstrainedEdge, addr 0xa6b1eb8, size 0x30, virtual false, abstract: false, final false
inline void MarkConstrainedEdge(::Pathfinding::Poly2Tri::TriangulationPoint*  p, ::Pathfinding::Poly2Tri::TriangulationPoint*  q) ;

/// @brief Method MarkNeighbor, addr 0xa6b14f0, size 0xc4, virtual false, abstract: false, final false
inline void MarkNeighbor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t) ;

/// @brief Method MarkNeighbor, addr 0xa6b1680, size 0x1a8, virtual false, abstract: false, final false
inline void MarkNeighbor(::Pathfinding::Poly2Tri::DelaunayTriangle*  t) ;

/// @brief Method NeighborAcrossFrom, addr 0xa6b1a10, size 0x7c, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method NeighborCCWFrom, addr 0xa6b1974, size 0x9c, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method NeighborCWFrom, addr 0xa6b18d8, size 0x9c, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::DelaunayTriangle* NeighborCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

static inline ::Pathfinding::Poly2Tri::DelaunayTriangle* New_ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2, ::Pathfinding::Poly2Tri::TriangulationPoint*  p3) ;

/// @brief Method OppositePoint, addr 0xa6b1828, size 0x2c, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::TriangulationPoint* OppositePoint(::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method PointCCWFrom, addr 0xa6b1a8c, size 0x84, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::TriangulationPoint* PointCCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method PointCWFrom, addr 0xa6b1854, size 0x84, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::TriangulationPoint* PointCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method RotateCW, addr 0xa6b1b10, size 0xc8, virtual false, abstract: false, final false
inline void RotateCW() ;

/// @brief Method SetConstrainedEdgeCCW, addr 0xa6b1fc0, size 0x4c, virtual false, abstract: false, final false
inline void SetConstrainedEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p, bool  ce) ;

/// @brief Method SetConstrainedEdgeCW, addr 0xa6b200c, size 0x4c, virtual false, abstract: false, final false
inline void SetConstrainedEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p, bool  ce) ;

/// @brief Method SetDelaunayEdgeCCW, addr 0xa6b20d0, size 0x4c, virtual false, abstract: false, final false
inline void SetDelaunayEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p, bool  ce) ;

/// @brief Method SetDelaunayEdgeCW, addr 0xa6b211c, size 0x4c, virtual false, abstract: false, final false
inline void SetDelaunayEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p, bool  ce) ;

/// @brief Method ToString, addr 0xa6b1c6c, size 0x1dc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Pathfinding::Poly2Tri::FixedBitArray3 const& __cordl_internal_get_EdgeIsConstrained() const;

constexpr ::Pathfinding::Poly2Tri::FixedBitArray3& __cordl_internal_get_EdgeIsConstrained() ;

constexpr ::Pathfinding::Poly2Tri::FixedBitArray3 const& __cordl_internal_get_EdgeIsDelaunay() const;

constexpr ::Pathfinding::Poly2Tri::FixedBitArray3& __cordl_internal_get_EdgeIsDelaunay() ;

constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*> const& __cordl_internal_get_Neighbors() const;

constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>& __cordl_internal_get_Neighbors() ;

constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*> const& __cordl_internal_get_Points() const;

constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*>& __cordl_internal_get_Points() ;

constexpr bool const& __cordl_internal_get__IsInterior_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInterior_k__BackingField() ;

constexpr void __cordl_internal_set_EdgeIsConstrained(::Pathfinding::Poly2Tri::FixedBitArray3  value) ;

constexpr void __cordl_internal_set_EdgeIsDelaunay(::Pathfinding::Poly2Tri::FixedBitArray3  value) ;

constexpr void __cordl_internal_set_Neighbors(::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>  value) ;

constexpr void __cordl_internal_set_Points(::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*>  value) ;

constexpr void __cordl_internal_set__IsInterior_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xa6b1308, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2, ::Pathfinding::Poly2Tri::TriangulationPoint*  p3) ;

/// [CompilerGenerated]
/// @brief Method get_IsInterior, addr 0xa6b13a8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInterior() ;

/// [CompilerGenerated]
/// @brief Method set_IsInterior, addr 0xa6b13b0, size 0x8, virtual false, abstract: false, final false
inline void set_IsInterior(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelaunayTriangle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelaunayTriangle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelaunayTriangle(DelaunayTriangle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelaunayTriangle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelaunayTriangle(DelaunayTriangle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32330};

/// @brief Field Points, offset: 0x10, size: 0x18, def value: None
 ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*>  ___Points;

/// @brief Field Neighbors, offset: 0x28, size: 0x18, def value: None
 ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>  ___Neighbors;

/// @brief Field EdgeIsConstrained, offset: 0x40, size: 0x3, def value: None
 ::Pathfinding::Poly2Tri::FixedBitArray3  ___EdgeIsConstrained;

/// @brief Field EdgeIsDelaunay, offset: 0x43, size: 0x3, def value: None
 ::Pathfinding::Poly2Tri::FixedBitArray3  ___EdgeIsDelaunay;

/// [CompilerGenerated]
/// @brief Field <IsInterior>k__BackingField, offset: 0x46, size: 0x1, def value: None
 bool  ____IsInterior_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::DelaunayTriangle, ___Points) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DelaunayTriangle, ___Neighbors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DelaunayTriangle, ___EdgeIsConstrained) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DelaunayTriangle, ___EdgeIsDelaunay) == 0x43, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DelaunayTriangle, ____IsInterior_k__BackingField) == 0x46, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::DelaunayTriangle) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
