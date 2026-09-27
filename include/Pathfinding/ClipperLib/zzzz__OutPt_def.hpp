#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/OutPt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/ClipperLib/zzzz__IntPoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OutPt)
// Forward declare root types
namespace Pathfinding::ClipperLib {
class OutPt;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::OutPt*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::OutPt*, "Pathfinding.ClipperLib", "OutPt");
// Dependencies Pathfinding.ClipperLib.IntPoint, System.Object
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.OutPt
class CORDL_TYPE OutPt : public ::System::Object {
public:
// Declarations
/// @brief Field Idx, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Idx, put=__cordl_internal_set_Idx)) int32_t  Idx;

/// @brief Field Next, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Pathfinding::ClipperLib::OutPt*  Next;

/// @brief Field Prev, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::Pathfinding::ClipperLib::OutPt*  Prev;

/// @brief Field Pt, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Pt, put=__cordl_internal_set_Pt)) ::Pathfinding::ClipperLib::IntPoint  Pt;

static inline ::Pathfinding::ClipperLib::OutPt* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Idx() const;

constexpr int32_t& __cordl_internal_get_Idx() ;

constexpr ::Pathfinding::ClipperLib::OutPt* const& __cordl_internal_get_Next() const;

constexpr ::Pathfinding::ClipperLib::OutPt*& __cordl_internal_get_Next() ;

constexpr ::Pathfinding::ClipperLib::OutPt* const& __cordl_internal_get_Prev() const;

constexpr ::Pathfinding::ClipperLib::OutPt*& __cordl_internal_get_Prev() ;

constexpr ::Pathfinding::ClipperLib::IntPoint const& __cordl_internal_get_Pt() const;

constexpr ::Pathfinding::ClipperLib::IntPoint& __cordl_internal_get_Pt() ;

constexpr void __cordl_internal_set_Idx(int32_t  value) ;

constexpr void __cordl_internal_set_Next(::Pathfinding::ClipperLib::OutPt*  value) ;

constexpr void __cordl_internal_set_Prev(::Pathfinding::ClipperLib::OutPt*  value) ;

constexpr void __cordl_internal_set_Pt(::Pathfinding::ClipperLib::IntPoint  value) ;

/// @brief Method .ctor, addr 0xa6835e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OutPt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OutPt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OutPt(OutPt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutPt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutPt(OutPt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31660};

/// @brief Field Idx, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Idx;

/// @brief Field Pt, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::ClipperLib::IntPoint  ___Pt;

/// @brief Field Next, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::OutPt*  ___Next;

/// @brief Field Prev, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::OutPt*  ___Prev;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::OutPt, ___Idx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::OutPt, ___Pt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::OutPt, ___Next) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::OutPt, ___Prev) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::OutPt) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
