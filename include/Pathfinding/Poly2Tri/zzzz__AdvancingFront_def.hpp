#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/AdvancingFront.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdvancingFront)
namespace Pathfinding::Poly2Tri {
class AdvancingFrontNode;
}
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class AdvancingFront;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::AdvancingFront*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::AdvancingFront*, "Pathfinding.Poly2Tri", "AdvancingFront");
// Dependencies System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.AdvancingFront
class CORDL_TYPE AdvancingFront : public ::System::Object {
public:
// Declarations
/// @brief Field Head, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Head, put=__cordl_internal_set_Head)) ::Pathfinding::Poly2Tri::AdvancingFrontNode*  Head;

/// @brief Field Search, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Search, put=__cordl_internal_set_Search)) ::Pathfinding::Poly2Tri::AdvancingFrontNode*  Search;

/// @brief Field Tail, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tail, put=__cordl_internal_set_Tail)) ::Pathfinding::Poly2Tri::AdvancingFrontNode*  Tail;

/// @brief Method AddNode, addr 0xa6b21bc, size 0x4, virtual false, abstract: false, final false
inline void AddNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FindSearchNode, addr 0xa6b22b0, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* FindSearchNode(double_t  x) ;

/// @brief Method LocateNode, addr 0xa6b22b8, size 0x14, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* LocateNode(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method LocateNode, addr 0xa6b22cc, size 0x70, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* LocateNode(double_t  x) ;

/// @brief Method LocatePoint, addr 0xa6b233c, size 0xf8, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* LocatePoint(::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

static inline ::Pathfinding::Poly2Tri::AdvancingFront* New_ctor(::Pathfinding::Poly2Tri::AdvancingFrontNode*  head, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  tail) ;

/// @brief Method RemoveNode, addr 0xa6b21c0, size 0x4, virtual false, abstract: false, final false
inline void RemoveNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method ToString, addr 0xa6b21c4, size 0xec, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& __cordl_internal_get_Head() const;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Head() ;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& __cordl_internal_get_Search() const;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Search() ;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& __cordl_internal_get_Tail() const;

constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Tail() ;

constexpr void __cordl_internal_set_Head(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr void __cordl_internal_set_Search(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr void __cordl_internal_set_Tail(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value) ;

/// @brief Method .ctor, addr 0xa6b2168, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::Poly2Tri::AdvancingFrontNode*  head, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  tail) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdvancingFront() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFront", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancingFront(AdvancingFront && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFront", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancingFront(AdvancingFront const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32331};

/// @brief Field Head, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::AdvancingFrontNode*  ___Head;

/// @brief Field Tail, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::AdvancingFrontNode*  ___Tail;

/// @brief Field Search, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::AdvancingFrontNode*  ___Search;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::AdvancingFront, ___Head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::AdvancingFront, ___Tail) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::AdvancingFront, ___Search) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::AdvancingFront) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
