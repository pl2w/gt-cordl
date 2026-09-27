#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/Join.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/ClipperLib/zzzz__IntPoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Join)
namespace Pathfinding::ClipperLib {
class OutPt;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
class Join;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::Join*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::Join*, "Pathfinding.ClipperLib", "Join");
// Dependencies Pathfinding.ClipperLib.IntPoint, System.Object
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.Join
class CORDL_TYPE Join : public ::System::Object {
public:
// Declarations
/// @brief Field OffPt, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_OffPt, put=__cordl_internal_set_OffPt)) ::Pathfinding::ClipperLib::IntPoint  OffPt;

/// @brief Field OutPt1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutPt1, put=__cordl_internal_set_OutPt1)) ::Pathfinding::ClipperLib::OutPt*  OutPt1;

/// @brief Field OutPt2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutPt2, put=__cordl_internal_set_OutPt2)) ::Pathfinding::ClipperLib::OutPt*  OutPt2;

static inline ::Pathfinding::ClipperLib::Join* New_ctor() ;

constexpr ::Pathfinding::ClipperLib::IntPoint const& __cordl_internal_get_OffPt() const;

constexpr ::Pathfinding::ClipperLib::IntPoint& __cordl_internal_get_OffPt() ;

constexpr ::Pathfinding::ClipperLib::OutPt* const& __cordl_internal_get_OutPt1() const;

constexpr ::Pathfinding::ClipperLib::OutPt*& __cordl_internal_get_OutPt1() ;

constexpr ::Pathfinding::ClipperLib::OutPt* const& __cordl_internal_get_OutPt2() const;

constexpr ::Pathfinding::ClipperLib::OutPt*& __cordl_internal_get_OutPt2() ;

constexpr void __cordl_internal_set_OffPt(::Pathfinding::ClipperLib::IntPoint  value) ;

constexpr void __cordl_internal_set_OutPt1(::Pathfinding::ClipperLib::OutPt*  value) ;

constexpr void __cordl_internal_set_OutPt2(::Pathfinding::ClipperLib::OutPt*  value) ;

/// @brief Method .ctor, addr 0xa6835f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Join() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Join", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Join(Join && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Join", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Join(Join const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31661};

/// @brief Field OutPt1, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::OutPt*  ___OutPt1;

/// @brief Field OutPt2, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::OutPt*  ___OutPt2;

/// @brief Field OffPt, offset: 0x20, size: 0x10, def value: None
 ::Pathfinding::ClipperLib::IntPoint  ___OffPt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::Join, ___OutPt1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Join, ___OutPt2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Join, ___OffPt) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::Join) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
