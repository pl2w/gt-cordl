#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DTSweepContext)
namespace Pathfinding::Poly2Tri {
class AdvancingFrontNode;
}
namespace Pathfinding::Poly2Tri {
class AdvancingFront;
}
namespace Pathfinding::Poly2Tri {
class DTSweepBasin;
}
namespace Pathfinding::Poly2Tri {
class DTSweepEdgeEvent;
}
namespace Pathfinding::Poly2Tri {
class DTSweepPointComparator;
}
namespace Pathfinding::Poly2Tri {
class DelaunayTriangle;
}
namespace Pathfinding::Poly2Tri {
class Triangulatable;
}
namespace Pathfinding::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace Pathfinding::Poly2Tri {
class TriangulationConstraint;
}
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class DTSweepContext;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::DTSweepContext*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::DTSweepContext*, "Pathfinding.Poly2Tri", "DTSweepContext");
// Dependencies Pathfinding.Poly2Tri.TriangulationContext
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.DTSweepContext
class CORDL_TYPE DTSweepContext : public ::Pathfinding::Poly2Tri::TriangulationContext {
public:
// Declarations
/// @brief Field ALPHA, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ALPHA, put=__cordl_internal_set_ALPHA)) float_t  ALPHA;

 __declspec(property(get=get_Algorithm)) ::Pathfinding::Poly2Tri::TriangulationAlgorithm  Algorithm;

/// @brief Field Basin, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Basin, put=__cordl_internal_set_Basin)) ::Pathfinding::Poly2Tri::DTSweepBasin*  Basin;

/// @brief Field EdgeEvent, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_EdgeEvent, put=__cordl_internal_set_EdgeEvent)) ::Pathfinding::Poly2Tri::DTSweepEdgeEvent*  EdgeEvent;

/// @brief Field Front, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Front, put=__cordl_internal_set_Front)) ::Pathfinding::Poly2Tri::AdvancingFront*  Front;

 __declspec(property(get=get_Head, put=set_Head)) ::Pathfinding::Poly2Tri::TriangulationPoint*  Head;

 __declspec(property(get=get_IsDebugEnabled)) bool  IsDebugEnabled;

 __declspec(property(get=get_Tail, put=set_Tail)) ::Pathfinding::Poly2Tri::TriangulationPoint*  Tail;

/// @brief Field <Head>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Head_k__BackingField, put=__cordl_internal_set__Head_k__BackingField)) ::Pathfinding::Poly2Tri::TriangulationPoint*  _Head_k__BackingField;

/// @brief Field <Tail>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tail_k__BackingField, put=__cordl_internal_set__Tail_k__BackingField)) ::Pathfinding::Poly2Tri::TriangulationPoint*  _Tail_k__BackingField;

/// @brief Field _comparator, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__comparator, put=__cordl_internal_set__comparator)) ::Pathfinding::Poly2Tri::DTSweepPointComparator*  _comparator;

/// @brief Method AddNode, addr 0xa6b3cf8, size 0x14, virtual false, abstract: false, final false
inline void AddNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method Clear, addr 0xa6b5e50, size 0x78, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateAdvancingFront, addr 0xa6b2498, size 0x29c, virtual false, abstract: false, final false
inline void CreateAdvancingFront() ;

/// @brief Method FinalizeTriangulation, addr 0xa6b3738, size 0xf0, virtual false, abstract: false, final false
inline void FinalizeTriangulation() ;

/// @brief Method LocateNode, addr 0xa6b3afc, size 0x20, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* LocateNode(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method MapTriangleToNodes, addr 0xa6b360c, size 0xd4, virtual false, abstract: false, final false
inline void MapTriangleToNodes(::Pathfinding::Poly2Tri::DelaunayTriangle*  t) ;

/// @brief Method MeshClean, addr 0xa6b3af8, size 0x4, virtual false, abstract: false, final false
inline void MeshClean(::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle) ;

/// @brief Method MeshCleanReq, addr 0xa6b5d34, size 0x11c, virtual false, abstract: false, final false
inline void MeshCleanReq(::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle) ;

/// @brief Method NewConstraint, addr 0xa6b62f0, size 0x68, virtual true, abstract: false, final false
inline ::Pathfinding::Poly2Tri::TriangulationConstraint* NewConstraint(::Pathfinding::Poly2Tri::TriangulationPoint*  a, ::Pathfinding::Poly2Tri::TriangulationPoint*  b) ;

static inline ::Pathfinding::Poly2Tri::DTSweepContext* New_ctor() ;

/// @brief Method PrepareTriangulation, addr 0xa6b5f48, size 0x294, virtual true, abstract: false, final false
inline void PrepareTriangulation(::Pathfinding::Poly2Tri::Triangulatable*  t) ;

/// @brief Method RemoveFromList, addr 0xa6b36e0, size 0x58, virtual false, abstract: false, final false
inline void RemoveFromList(::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle) ;

/// @brief Method RemoveNode, addr 0xa6b5980, size 0x14, virtual false, abstract: false, final false
inline void RemoveNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

constexpr float_t const& __cordl_internal_get_ALPHA() const;

constexpr float_t& __cordl_internal_get_ALPHA() ;

constexpr ::Pathfinding::Poly2Tri::DTSweepBasin* const& __cordl_internal_get_Basin() const;

constexpr ::Pathfinding::Poly2Tri::DTSweepBasin*& __cordl_internal_get_Basin() ;

constexpr ::Pathfinding::Poly2Tri::DTSweepEdgeEvent* const& __cordl_internal_get_EdgeEvent() const;

constexpr ::Pathfinding::Poly2Tri::DTSweepEdgeEvent*& __cordl_internal_get_EdgeEvent() ;

constexpr ::Pathfinding::Poly2Tri::AdvancingFront* const& __cordl_internal_get_Front() const;

constexpr ::Pathfinding::Poly2Tri::AdvancingFront*& __cordl_internal_get_Front() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& __cordl_internal_get__Head_k__BackingField() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& __cordl_internal_get__Head_k__BackingField() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& __cordl_internal_get__Tail_k__BackingField() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& __cordl_internal_get__Tail_k__BackingField() ;

constexpr ::Pathfinding::Poly2Tri::DTSweepPointComparator* const& __cordl_internal_get__comparator() const;

constexpr ::Pathfinding::Poly2Tri::DTSweepPointComparator*& __cordl_internal_get__comparator() ;

constexpr void __cordl_internal_set_ALPHA(float_t  value) ;

constexpr void __cordl_internal_set_Basin(::Pathfinding::Poly2Tri::DTSweepBasin*  value) ;

constexpr void __cordl_internal_set_EdgeEvent(::Pathfinding::Poly2Tri::DTSweepEdgeEvent*  value) ;

constexpr void __cordl_internal_set_Front(::Pathfinding::Poly2Tri::AdvancingFront*  value) ;

constexpr void __cordl_internal_set__Head_k__BackingField(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

constexpr void __cordl_internal_set__Tail_k__BackingField(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

constexpr void __cordl_internal_set__comparator(::Pathfinding::Poly2Tri::DTSweepPointComparator*  value) ;

/// @brief Method .ctor, addr 0xa6b00c8, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Algorithm, addr 0xa6b6358, size 0x8, virtual true, abstract: false, final false
inline ::Pathfinding::Poly2Tri::TriangulationAlgorithm get_Algorithm() ;

/// [CompilerGenerated]
/// @brief Method get_Head, addr 0xa6b5d0c, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::TriangulationPoint* get_Head() ;

/// @brief Method get_IsDebugEnabled, addr 0xa6b5d2c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsDebugEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_Tail, addr 0xa6b5d1c, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::TriangulationPoint* get_Tail() ;

/// [CompilerGenerated]
/// @brief Method set_Head, addr 0xa6b5d14, size 0x8, virtual false, abstract: false, final false
inline void set_Head(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Tail, addr 0xa6b5d24, size 0x8, virtual false, abstract: false, final false
inline void set_Tail(::Pathfinding::Poly2Tri::TriangulationPoint*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DTSweepContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DTSweepContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DTSweepContext(DTSweepContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DTSweepContext(DTSweepContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32336};

/// @brief Field ALPHA, offset: 0x40, size: 0x4, def value: None
 float_t  ___ALPHA;

/// @brief Field Front, offset: 0x48, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::AdvancingFront*  ___Front;

/// @brief Field Basin, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::DTSweepBasin*  ___Basin;

/// @brief Field EdgeEvent, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::DTSweepEdgeEvent*  ___EdgeEvent;

/// @brief Field _comparator, offset: 0x60, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::DTSweepPointComparator*  ____comparator;

/// [CompilerGenerated]
/// @brief Field <Head>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationPoint*  ____Head_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Tail>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationPoint*  ____Tail_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepContext, ___ALPHA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepContext, ___Front) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepContext, ___Basin) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepContext, ___EdgeEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepContext, ____comparator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepContext, ____Head_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::DTSweepContext, ____Tail_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::DTSweepContext) == 0x78, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
