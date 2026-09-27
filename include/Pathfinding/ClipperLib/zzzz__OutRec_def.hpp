#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/OutRec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OutRec)
namespace Pathfinding::ClipperLib {
class OutPt;
}
namespace Pathfinding::ClipperLib {
class PolyNode;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
class OutRec;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::OutRec*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::OutRec*, "Pathfinding.ClipperLib", "OutRec");
// Dependencies System.Object
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.OutRec
class CORDL_TYPE OutRec : public ::System::Object {
public:
// Declarations
/// @brief Field BottomPt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BottomPt, put=__cordl_internal_set_BottomPt)) ::Pathfinding::ClipperLib::OutPt*  BottomPt;

/// @brief Field FirstLeft, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FirstLeft, put=__cordl_internal_set_FirstLeft)) ::Pathfinding::ClipperLib::OutRec*  FirstLeft;

/// @brief Field Idx, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Idx, put=__cordl_internal_set_Idx)) int32_t  Idx;

/// @brief Field IsHole, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsHole, put=__cordl_internal_set_IsHole)) bool  IsHole;

/// @brief Field IsOpen, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsOpen, put=__cordl_internal_set_IsOpen)) bool  IsOpen;

/// @brief Field PolyNode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PolyNode, put=__cordl_internal_set_PolyNode)) ::Pathfinding::ClipperLib::PolyNode*  PolyNode;

/// @brief Field Pts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pts, put=__cordl_internal_set_Pts)) ::Pathfinding::ClipperLib::OutPt*  Pts;

static inline ::Pathfinding::ClipperLib::OutRec* New_ctor() ;

constexpr ::Pathfinding::ClipperLib::OutPt* const& __cordl_internal_get_BottomPt() const;

constexpr ::Pathfinding::ClipperLib::OutPt*& __cordl_internal_get_BottomPt() ;

constexpr ::Pathfinding::ClipperLib::OutRec* const& __cordl_internal_get_FirstLeft() const;

constexpr ::Pathfinding::ClipperLib::OutRec*& __cordl_internal_get_FirstLeft() ;

constexpr int32_t const& __cordl_internal_get_Idx() const;

constexpr int32_t& __cordl_internal_get_Idx() ;

constexpr bool const& __cordl_internal_get_IsHole() const;

constexpr bool& __cordl_internal_get_IsHole() ;

constexpr bool const& __cordl_internal_get_IsOpen() const;

constexpr bool& __cordl_internal_get_IsOpen() ;

constexpr ::Pathfinding::ClipperLib::PolyNode* const& __cordl_internal_get_PolyNode() const;

constexpr ::Pathfinding::ClipperLib::PolyNode*& __cordl_internal_get_PolyNode() ;

constexpr ::Pathfinding::ClipperLib::OutPt* const& __cordl_internal_get_Pts() const;

constexpr ::Pathfinding::ClipperLib::OutPt*& __cordl_internal_get_Pts() ;

constexpr void __cordl_internal_set_BottomPt(::Pathfinding::ClipperLib::OutPt*  value) ;

constexpr void __cordl_internal_set_FirstLeft(::Pathfinding::ClipperLib::OutRec*  value) ;

constexpr void __cordl_internal_set_Idx(int32_t  value) ;

constexpr void __cordl_internal_set_IsHole(bool  value) ;

constexpr void __cordl_internal_set_IsOpen(bool  value) ;

constexpr void __cordl_internal_set_PolyNode(::Pathfinding::ClipperLib::PolyNode*  value) ;

constexpr void __cordl_internal_set_Pts(::Pathfinding::ClipperLib::OutPt*  value) ;

/// @brief Method .ctor, addr 0xa6835e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OutRec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OutRec", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OutRec(OutRec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutRec", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutRec(OutRec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31659};

/// @brief Field Idx, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Idx;

/// @brief Field IsHole, offset: 0x14, size: 0x1, def value: None
 bool  ___IsHole;

/// @brief Field IsOpen, offset: 0x15, size: 0x1, def value: None
 bool  ___IsOpen;

/// @brief Field FirstLeft, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::OutRec*  ___FirstLeft;

/// @brief Field Pts, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::OutPt*  ___Pts;

/// @brief Field BottomPt, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::OutPt*  ___BottomPt;

/// @brief Field PolyNode, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::PolyNode*  ___PolyNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::OutRec, ___Idx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::OutRec, ___IsHole) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::OutRec, ___IsOpen) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::OutRec, ___FirstLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::OutRec, ___Pts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::OutRec, ___BottomPt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::OutRec, ___PolyNode) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::OutRec) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
