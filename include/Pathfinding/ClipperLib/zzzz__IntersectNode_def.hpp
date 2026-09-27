#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/IntersectNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/ClipperLib/zzzz__IntPoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IntersectNode)
namespace Pathfinding::ClipperLib {
class TEdge;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
class IntersectNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::IntersectNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::IntersectNode*, "Pathfinding.ClipperLib", "IntersectNode");
// Dependencies Pathfinding.ClipperLib.IntPoint, System.Object
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.IntersectNode
class CORDL_TYPE IntersectNode : public ::System::Object {
public:
// Declarations
/// @brief Field Edge1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Edge1, put=__cordl_internal_set_Edge1)) ::Pathfinding::ClipperLib::TEdge*  Edge1;

/// @brief Field Edge2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Edge2, put=__cordl_internal_set_Edge2)) ::Pathfinding::ClipperLib::TEdge*  Edge2;

/// @brief Field Next, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Pathfinding::ClipperLib::IntersectNode*  Next;

/// @brief Field Pt, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Pt, put=__cordl_internal_set_Pt)) ::Pathfinding::ClipperLib::IntPoint  Pt;

static inline ::Pathfinding::ClipperLib::IntersectNode* New_ctor() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_Edge1() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_Edge1() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_Edge2() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_Edge2() ;

constexpr ::Pathfinding::ClipperLib::IntersectNode* const& __cordl_internal_get_Next() const;

constexpr ::Pathfinding::ClipperLib::IntersectNode*& __cordl_internal_get_Next() ;

constexpr ::Pathfinding::ClipperLib::IntPoint const& __cordl_internal_get_Pt() const;

constexpr ::Pathfinding::ClipperLib::IntPoint& __cordl_internal_get_Pt() ;

constexpr void __cordl_internal_set_Edge1(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_Edge2(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_Next(::Pathfinding::ClipperLib::IntersectNode*  value) ;

constexpr void __cordl_internal_set_Pt(::Pathfinding::ClipperLib::IntPoint  value) ;

/// @brief Method .ctor, addr 0xa6835c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntersectNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntersectNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IntersectNode(IntersectNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntersectNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntersectNode(IntersectNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31656};

/// @brief Field Edge1, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___Edge1;

/// @brief Field Edge2, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___Edge2;

/// @brief Field Pt, offset: 0x20, size: 0x10, def value: None
 ::Pathfinding::ClipperLib::IntPoint  ___Pt;

/// @brief Field Next, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::IntersectNode*  ___Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::IntersectNode, ___Edge1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::IntersectNode, ___Edge2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::IntersectNode, ___Pt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::IntersectNode, ___Next) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::IntersectNode) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
