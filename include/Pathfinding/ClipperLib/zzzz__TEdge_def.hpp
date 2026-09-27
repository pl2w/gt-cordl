#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/TEdge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/ClipperLib/zzzz__EdgeSide_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TEdge)
// Forward declare root types
namespace Pathfinding::ClipperLib {
class TEdge;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::TEdge*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::TEdge*, "Pathfinding.ClipperLib", "TEdge");
// Dependencies Pathfinding.ClipperLib.EdgeSide, Pathfinding.ClipperLib.IntPoint, Pathfinding.ClipperLib.PolyType, System.Object
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.TEdge
class CORDL_TYPE TEdge : public ::System::Object {
public:
// Declarations
/// @brief Field Bot, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_Bot, put=__cordl_internal_set_Bot)) ::Pathfinding::ClipperLib::IntPoint  Bot;

/// @brief Field Curr, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Curr, put=__cordl_internal_set_Curr)) ::Pathfinding::ClipperLib::IntPoint  Curr;

/// @brief Field Delta, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_Delta, put=__cordl_internal_set_Delta)) ::Pathfinding::ClipperLib::IntPoint  Delta;

/// @brief Field Dx, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Dx, put=__cordl_internal_set_Dx)) double_t  Dx;

/// @brief Field Next, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Pathfinding::ClipperLib::TEdge*  Next;

/// @brief Field NextInAEL, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_NextInAEL, put=__cordl_internal_set_NextInAEL)) ::Pathfinding::ClipperLib::TEdge*  NextInAEL;

/// @brief Field NextInLML, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_NextInLML, put=__cordl_internal_set_NextInLML)) ::Pathfinding::ClipperLib::TEdge*  NextInLML;

/// @brief Field NextInSEL, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_NextInSEL, put=__cordl_internal_set_NextInSEL)) ::Pathfinding::ClipperLib::TEdge*  NextInSEL;

/// @brief Field OutIdx, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_OutIdx, put=__cordl_internal_set_OutIdx)) int32_t  OutIdx;

/// @brief Field PolyTyp, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_PolyTyp, put=__cordl_internal_set_PolyTyp)) ::Pathfinding::ClipperLib::PolyType  PolyTyp;

/// @brief Field Prev, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::Pathfinding::ClipperLib::TEdge*  Prev;

/// @brief Field PrevInAEL, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrevInAEL, put=__cordl_internal_set_PrevInAEL)) ::Pathfinding::ClipperLib::TEdge*  PrevInAEL;

/// @brief Field PrevInSEL, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrevInSEL, put=__cordl_internal_set_PrevInSEL)) ::Pathfinding::ClipperLib::TEdge*  PrevInSEL;

/// @brief Field Side, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Side, put=__cordl_internal_set_Side)) ::Pathfinding::ClipperLib::EdgeSide  Side;

/// @brief Field Top, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_Top, put=__cordl_internal_set_Top)) ::Pathfinding::ClipperLib::IntPoint  Top;

/// @brief Field WindCnt, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_WindCnt, put=__cordl_internal_set_WindCnt)) int32_t  WindCnt;

/// @brief Field WindCnt2, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_WindCnt2, put=__cordl_internal_set_WindCnt2)) int32_t  WindCnt2;

/// @brief Field WindDelta, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_WindDelta, put=__cordl_internal_set_WindDelta)) int32_t  WindDelta;

static inline ::Pathfinding::ClipperLib::TEdge* New_ctor() ;

constexpr ::Pathfinding::ClipperLib::IntPoint const& __cordl_internal_get_Bot() const;

constexpr ::Pathfinding::ClipperLib::IntPoint& __cordl_internal_get_Bot() ;

constexpr ::Pathfinding::ClipperLib::IntPoint const& __cordl_internal_get_Curr() const;

constexpr ::Pathfinding::ClipperLib::IntPoint& __cordl_internal_get_Curr() ;

constexpr ::Pathfinding::ClipperLib::IntPoint const& __cordl_internal_get_Delta() const;

constexpr ::Pathfinding::ClipperLib::IntPoint& __cordl_internal_get_Delta() ;

constexpr double_t const& __cordl_internal_get_Dx() const;

constexpr double_t& __cordl_internal_get_Dx() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_Next() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_Next() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_NextInAEL() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_NextInAEL() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_NextInLML() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_NextInLML() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_NextInSEL() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_NextInSEL() ;

constexpr int32_t const& __cordl_internal_get_OutIdx() const;

constexpr int32_t& __cordl_internal_get_OutIdx() ;

constexpr ::Pathfinding::ClipperLib::PolyType const& __cordl_internal_get_PolyTyp() const;

constexpr ::Pathfinding::ClipperLib::PolyType& __cordl_internal_get_PolyTyp() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_Prev() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_Prev() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_PrevInAEL() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_PrevInAEL() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_PrevInSEL() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_PrevInSEL() ;

constexpr ::Pathfinding::ClipperLib::EdgeSide const& __cordl_internal_get_Side() const;

constexpr ::Pathfinding::ClipperLib::EdgeSide& __cordl_internal_get_Side() ;

constexpr ::Pathfinding::ClipperLib::IntPoint const& __cordl_internal_get_Top() const;

constexpr ::Pathfinding::ClipperLib::IntPoint& __cordl_internal_get_Top() ;

constexpr int32_t const& __cordl_internal_get_WindCnt() const;

constexpr int32_t& __cordl_internal_get_WindCnt() ;

constexpr int32_t const& __cordl_internal_get_WindCnt2() const;

constexpr int32_t& __cordl_internal_get_WindCnt2() ;

constexpr int32_t const& __cordl_internal_get_WindDelta() const;

constexpr int32_t& __cordl_internal_get_WindDelta() ;

constexpr void __cordl_internal_set_Bot(::Pathfinding::ClipperLib::IntPoint  value) ;

constexpr void __cordl_internal_set_Curr(::Pathfinding::ClipperLib::IntPoint  value) ;

constexpr void __cordl_internal_set_Delta(::Pathfinding::ClipperLib::IntPoint  value) ;

constexpr void __cordl_internal_set_Dx(double_t  value) ;

constexpr void __cordl_internal_set_Next(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_NextInAEL(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_NextInLML(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_NextInSEL(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_OutIdx(int32_t  value) ;

constexpr void __cordl_internal_set_PolyTyp(::Pathfinding::ClipperLib::PolyType  value) ;

constexpr void __cordl_internal_set_Prev(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_PrevInAEL(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_PrevInSEL(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_Side(::Pathfinding::ClipperLib::EdgeSide  value) ;

constexpr void __cordl_internal_set_Top(::Pathfinding::ClipperLib::IntPoint  value) ;

constexpr void __cordl_internal_set_WindCnt(int32_t  value) ;

constexpr void __cordl_internal_set_WindCnt2(int32_t  value) ;

constexpr void __cordl_internal_set_WindDelta(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6835c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TEdge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TEdge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TEdge(TEdge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TEdge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TEdge(TEdge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31655};

/// @brief Field Bot, offset: 0x10, size: 0x10, def value: None
 ::Pathfinding::ClipperLib::IntPoint  ___Bot;

/// @brief Field Curr, offset: 0x20, size: 0x10, def value: None
 ::Pathfinding::ClipperLib::IntPoint  ___Curr;

/// @brief Field Top, offset: 0x30, size: 0x10, def value: None
 ::Pathfinding::ClipperLib::IntPoint  ___Top;

/// @brief Field Delta, offset: 0x40, size: 0x10, def value: None
 ::Pathfinding::ClipperLib::IntPoint  ___Delta;

/// @brief Field Dx, offset: 0x50, size: 0x8, def value: None
 double_t  ___Dx;

/// @brief Field PolyTyp, offset: 0x58, size: 0x4, def value: None
 ::Pathfinding::ClipperLib::PolyType  ___PolyTyp;

/// @brief Field Side, offset: 0x5c, size: 0x4, def value: None
 ::Pathfinding::ClipperLib::EdgeSide  ___Side;

/// @brief Field WindDelta, offset: 0x60, size: 0x4, def value: None
 int32_t  ___WindDelta;

/// @brief Field WindCnt, offset: 0x64, size: 0x4, def value: None
 int32_t  ___WindCnt;

/// @brief Field WindCnt2, offset: 0x68, size: 0x4, def value: None
 int32_t  ___WindCnt2;

/// @brief Field OutIdx, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___OutIdx;

/// @brief Field Next, offset: 0x70, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___Next;

/// @brief Field Prev, offset: 0x78, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___Prev;

/// @brief Field NextInLML, offset: 0x80, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___NextInLML;

/// @brief Field NextInAEL, offset: 0x88, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___NextInAEL;

/// @brief Field PrevInAEL, offset: 0x90, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___PrevInAEL;

/// @brief Field NextInSEL, offset: 0x98, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___NextInSEL;

/// @brief Field PrevInSEL, offset: 0xa0, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___PrevInSEL;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___Bot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___Curr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___Top) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___Delta) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___Dx) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___PolyTyp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___Side) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___WindDelta) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___WindCnt) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___WindCnt2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___OutIdx) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___Next) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___Prev) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___NextInLML) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___NextInAEL) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___PrevInAEL) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___NextInSEL) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::TEdge, ___PrevInSEL) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::TEdge) == 0xa8, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
