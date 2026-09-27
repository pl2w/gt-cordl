#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/Scanbeam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Scanbeam)
// Forward declare root types
namespace Pathfinding::ClipperLib {
class Scanbeam;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::Scanbeam*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::Scanbeam*, "Pathfinding.ClipperLib", "Scanbeam");
// Dependencies System.Object
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.Scanbeam
class CORDL_TYPE Scanbeam : public ::System::Object {
public:
// Declarations
/// @brief Field Next, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Pathfinding::ClipperLib::Scanbeam*  Next;

/// @brief Field Y, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Y, put=__cordl_internal_set_Y)) int64_t  Y;

static inline ::Pathfinding::ClipperLib::Scanbeam* New_ctor() ;

constexpr ::Pathfinding::ClipperLib::Scanbeam* const& __cordl_internal_get_Next() const;

constexpr ::Pathfinding::ClipperLib::Scanbeam*& __cordl_internal_get_Next() ;

constexpr int64_t const& __cordl_internal_get_Y() const;

constexpr int64_t& __cordl_internal_get_Y() ;

constexpr void __cordl_internal_set_Next(::Pathfinding::ClipperLib::Scanbeam*  value) ;

constexpr void __cordl_internal_set_Y(int64_t  value) ;

/// @brief Method .ctor, addr 0xa6835d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Scanbeam() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Scanbeam", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Scanbeam(Scanbeam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Scanbeam", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Scanbeam(Scanbeam const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31658};

/// @brief Field Y, offset: 0x10, size: 0x8, def value: None
 int64_t  ___Y;

/// @brief Field Next, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::Scanbeam*  ___Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::Scanbeam, ___Y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Scanbeam, ___Next) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::Scanbeam) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
