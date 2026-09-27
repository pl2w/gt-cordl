#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/ClipperBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipperBase)
namespace Pathfinding::ClipperLib {
struct IntPoint;
}
namespace Pathfinding::ClipperLib {
class LocalMinima;
}
namespace Pathfinding::ClipperLib {
class OutPt;
}
namespace Pathfinding::ClipperLib {
struct PolyType;
}
namespace Pathfinding::ClipperLib {
class TEdge;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
class ClipperBase;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::ClipperBase*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::ClipperBase*, "Pathfinding.ClipperLib", "ClipperBase");
// Dependencies System.Object
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.ClipperBase
class CORDL_TYPE ClipperBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PreserveCollinear, put=set_PreserveCollinear)) bool  PreserveCollinear;

/// @brief Field <PreserveCollinear>k__BackingField, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get__PreserveCollinear_k__BackingField, put=__cordl_internal_set__PreserveCollinear_k__BackingField)) bool  _PreserveCollinear_k__BackingField;

/// @brief Field m_CurrentLM, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentLM, put=__cordl_internal_set_m_CurrentLM)) ::Pathfinding::ClipperLib::LocalMinima*  m_CurrentLM;

/// @brief Field m_HasOpenPaths, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasOpenPaths, put=__cordl_internal_set_m_HasOpenPaths)) bool  m_HasOpenPaths;

/// @brief Field m_MinimaList, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MinimaList, put=__cordl_internal_set_m_MinimaList)) ::Pathfinding::ClipperLib::LocalMinima*  m_MinimaList;

/// @brief Field m_UseFullRange, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseFullRange, put=__cordl_internal_set_m_UseFullRange)) bool  m_UseFullRange;

/// @brief Field m_edges, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_edges, put=__cordl_internal_set_m_edges)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::TEdge*>*>*  m_edges;

/// @brief Method AddBoundsToLML, addr 0xa684b00, size 0x208, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::TEdge* AddBoundsToLML(::Pathfinding::ClipperLib::TEdge*  E, bool  Closed) ;

/// @brief Method AddPath, addr 0xa683e70, size 0x954, virtual false, abstract: false, final false
inline bool AddPath(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  pg, ::Pathfinding::ClipperLib::PolyType  polyType, bool  Closed) ;

/// @brief Method AddPolygon, addr 0xa684d08, size 0x8, virtual false, abstract: false, final false
inline bool AddPolygon(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  pg, ::Pathfinding::ClipperLib::PolyType  polyType) ;

/// @brief Method AllHorizontal, addr 0xa684890, size 0x44, virtual false, abstract: false, final false
inline bool AllHorizontal(::Pathfinding::ClipperLib::TEdge*  Edge) ;

/// @brief Method AscendToMax, addr 0xa6848d4, size 0x190, virtual false, abstract: false, final false
inline void AscendToMax(::by_ref<::Pathfinding::ClipperLib::TEdge*>  E, bool  Appending, bool  IsClosed) ;

/// @brief Method Clear, addr 0xa683ac0, size 0x174, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method DescendToMin, addr 0xa6851bc, size 0x1e0, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::TEdge* DescendToMin(::by_ref<::Pathfinding::ClipperLib::TEdge*>  E) ;

/// @brief Method DisposeLocalMinimaList, addr 0xa683c34, size 0x5c, virtual false, abstract: false, final false
inline void DisposeLocalMinimaList() ;

/// @brief Method DoMinimaLML, addr 0xa684f20, size 0x1ec, virtual false, abstract: false, final false
inline void DoMinimaLML(::Pathfinding::ClipperLib::TEdge*  E1, ::Pathfinding::ClipperLib::TEdge*  E2, bool  IsClosed) ;

/// @brief Method GetLastHorz, addr 0xa684d10, size 0x40, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::TEdge* GetLastHorz(::Pathfinding::ClipperLib::TEdge*  Edge) ;

/// @brief Method InitEdge, addr 0xa683d60, size 0x60, virtual false, abstract: false, final false
inline void InitEdge(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::TEdge*  eNext, ::Pathfinding::ClipperLib::TEdge*  ePrev, ::Pathfinding::ClipperLib::IntPoint  pt) ;

/// @brief Method InitEdge2, addr 0xa683dc0, size 0x6c, virtual false, abstract: false, final false
inline void InitEdge2(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::PolyType  polyType) ;

/// @brief Method InsertLocalMinima, addr 0xa68510c, size 0x90, virtual false, abstract: false, final false
inline void InsertLocalMinima(::Pathfinding::ClipperLib::LocalMinima*  newLm) ;

/// @brief Method IsHorizontal, addr 0xa6836b8, size 0x1c, virtual false, abstract: false, final false
static inline bool IsHorizontal(::Pathfinding::ClipperLib::TEdge*  e) ;

/// @brief Method JustBeforeLocMin, addr 0xa684e84, size 0x48, virtual false, abstract: false, final false
inline bool JustBeforeLocMin(::Pathfinding::ClipperLib::TEdge*  Edge) ;

/// @brief Method MoreAbove, addr 0xa684ecc, size 0x54, virtual false, abstract: false, final false
inline bool MoreAbove(::Pathfinding::ClipperLib::TEdge*  Edge) ;

/// @brief Method MoreBelow, addr 0xa684e04, size 0x80, virtual false, abstract: false, final false
inline bool MoreBelow(::Pathfinding::ClipperLib::TEdge*  Edge) ;

static inline ::Pathfinding::ClipperLib::ClipperBase* New_ctor() ;

/// @brief Method PointInPolygon, addr 0xa683868, size 0x144, virtual false, abstract: false, final false
inline bool PointInPolygon(::Pathfinding::ClipperLib::IntPoint  pt, ::Pathfinding::ClipperLib::OutPt*  pp, bool  UseFullRange) ;

/// @brief Method PointOnLineSegment, addr 0xa6836d4, size 0x120, virtual false, abstract: false, final false
inline bool PointOnLineSegment(::Pathfinding::ClipperLib::IntPoint  pt, ::Pathfinding::ClipperLib::IntPoint  linePt1, ::Pathfinding::ClipperLib::IntPoint  linePt2, bool  UseFullRange) ;

/// @brief Method PointOnPolygon, addr 0xa6837f4, size 0x74, virtual false, abstract: false, final false
inline bool PointOnPolygon(::Pathfinding::ClipperLib::IntPoint  pt, ::Pathfinding::ClipperLib::OutPt*  pp, bool  UseFullRange) ;

/// @brief Method PopLocalMinima, addr 0xa68539c, size 0x18, virtual false, abstract: false, final false
inline void PopLocalMinima() ;

/// @brief Method Pt2IsBetweenPt1AndPt3, addr 0xa684828, size 0x68, virtual false, abstract: false, final false
inline bool Pt2IsBetweenPt1AndPt3(::Pathfinding::ClipperLib::IntPoint  pt1, ::Pathfinding::ClipperLib::IntPoint  pt2, ::Pathfinding::ClipperLib::IntPoint  pt3) ;

/// @brief Method RangeTest, addr 0xa683c90, size 0xd0, virtual false, abstract: false, final false
inline void RangeTest(::Pathfinding::ClipperLib::IntPoint  Pt, ::by_ref<bool>  useFullRange) ;

/// @brief Method RemoveEdge, addr 0xa6847c4, size 0x64, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::TEdge* RemoveEdge(::Pathfinding::ClipperLib::TEdge*  e) ;

/// @brief Method Reset, addr 0xa6853b4, size 0x98, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ReverseHorizontal, addr 0xa68519c, size 0x20, virtual false, abstract: false, final false
inline void ReverseHorizontal(::Pathfinding::ClipperLib::TEdge*  e) ;

/// @brief Method SetDx, addr 0xa683e2c, size 0x44, virtual false, abstract: false, final false
inline void SetDx(::Pathfinding::ClipperLib::TEdge*  e) ;

/// @brief Method SharedVertWithNextIsBot, addr 0xa684d50, size 0xb4, virtual false, abstract: false, final false
inline bool SharedVertWithNextIsBot(::Pathfinding::ClipperLib::TEdge*  Edge) ;

/// @brief Method SharedVertWithPrevAtTop, addr 0xa684a64, size 0x9c, virtual false, abstract: false, final false
inline bool SharedVertWithPrevAtTop(::Pathfinding::ClipperLib::TEdge*  Edge) ;

/// @brief Method SlopesEqual, addr 0xa6839ac, size 0x8c, virtual false, abstract: false, final false
static inline bool SlopesEqual(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, bool  UseFullRange) ;

/// @brief Method SlopesEqual, addr 0xa683a38, size 0x88, virtual false, abstract: false, final false
static inline bool SlopesEqual(::Pathfinding::ClipperLib::IntPoint  pt1, ::Pathfinding::ClipperLib::IntPoint  pt2, ::Pathfinding::ClipperLib::IntPoint  pt3, bool  UseFullRange) ;

constexpr bool const& __cordl_internal_get__PreserveCollinear_k__BackingField() const;

constexpr bool& __cordl_internal_get__PreserveCollinear_k__BackingField() ;

constexpr ::Pathfinding::ClipperLib::LocalMinima* const& __cordl_internal_get_m_CurrentLM() const;

constexpr ::Pathfinding::ClipperLib::LocalMinima*& __cordl_internal_get_m_CurrentLM() ;

constexpr bool const& __cordl_internal_get_m_HasOpenPaths() const;

constexpr bool& __cordl_internal_get_m_HasOpenPaths() ;

constexpr ::Pathfinding::ClipperLib::LocalMinima* const& __cordl_internal_get_m_MinimaList() const;

constexpr ::Pathfinding::ClipperLib::LocalMinima*& __cordl_internal_get_m_MinimaList() ;

constexpr bool const& __cordl_internal_get_m_UseFullRange() const;

constexpr bool& __cordl_internal_get_m_UseFullRange() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::TEdge*>*>* const& __cordl_internal_get_m_edges() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::TEdge*>*>*& __cordl_internal_get_m_edges() ;

constexpr void __cordl_internal_set__PreserveCollinear_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_CurrentLM(::Pathfinding::ClipperLib::LocalMinima*  value) ;

constexpr void __cordl_internal_set_m_HasOpenPaths(bool  value) ;

constexpr void __cordl_internal_set_m_MinimaList(::Pathfinding::ClipperLib::LocalMinima*  value) ;

constexpr void __cordl_internal_set_m_UseFullRange(bool  value) ;

constexpr void __cordl_internal_set_m_edges(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::TEdge*>*>*  value) ;

/// @brief Method .ctor, addr 0xa6835f8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PreserveCollinear, addr 0xa6836a8, size 0x8, virtual false, abstract: false, final false
inline bool get_PreserveCollinear() ;

/// [CompilerGenerated]
/// @brief Method set_PreserveCollinear, addr 0xa6836b0, size 0x8, virtual false, abstract: false, final false
inline void set_PreserveCollinear(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipperBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipperBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipperBase(ClipperBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipperBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipperBase(ClipperBase const& ) = delete;

/// @brief Field Skip offset 0xffffffff size 0x4
static constexpr int32_t  Skip{static_cast<int32_t>(0xfffffffe)};

/// @brief Field Unassigned offset 0xffffffff size 0x4
static constexpr int32_t  Unassigned{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31662};

/// @brief Field hiRange offset 0xffffffff size 0x8
static constexpr int64_t  hiRange{static_cast<int64_t>(0x3fffffffffffffff)};

/// @brief Field horizontal offset 0xffffffff size 0x8
static constexpr double_t  horizontal{static_cast<double_t>(-3.4e38)};

/// @brief Field loRange offset 0xffffffff size 0x8
static constexpr int64_t  loRange{static_cast<int64_t>(0x3fffffff)};

/// @brief Field tolerance offset 0xffffffff size 0x8
static constexpr double_t  tolerance{static_cast<double_t>(1e-20)};

/// @brief Field m_MinimaList, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::LocalMinima*  ___m_MinimaList;

/// @brief Field m_CurrentLM, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::LocalMinima*  ___m_CurrentLM;

/// @brief Field m_edges, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::TEdge*>*>*  ___m_edges;

/// @brief Field m_UseFullRange, offset: 0x28, size: 0x1, def value: None
 bool  ___m_UseFullRange;

/// @brief Field m_HasOpenPaths, offset: 0x29, size: 0x1, def value: None
 bool  ___m_HasOpenPaths;

/// [CompilerGenerated]
/// @brief Field <PreserveCollinear>k__BackingField, offset: 0x2a, size: 0x1, def value: None
 bool  ____PreserveCollinear_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::ClipperBase, ___m_MinimaList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::ClipperBase, ___m_CurrentLM) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::ClipperBase, ___m_edges) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::ClipperBase, ___m_UseFullRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::ClipperBase, ___m_HasOpenPaths) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::ClipperBase, ____PreserveCollinear_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::ClipperBase) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
