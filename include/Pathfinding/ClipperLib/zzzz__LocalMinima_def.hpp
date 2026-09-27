#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/LocalMinima.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMinima)
namespace Pathfinding::ClipperLib {
class TEdge;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
class LocalMinima;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::LocalMinima*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::LocalMinima*, "Pathfinding.ClipperLib", "LocalMinima");
// Dependencies System.Object
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.LocalMinima
class CORDL_TYPE LocalMinima : public ::System::Object {
public:
// Declarations
/// @brief Field LeftBound, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_LeftBound, put=__cordl_internal_set_LeftBound)) ::Pathfinding::ClipperLib::TEdge*  LeftBound;

/// @brief Field Next, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Pathfinding::ClipperLib::LocalMinima*  Next;

/// @brief Field RightBound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RightBound, put=__cordl_internal_set_RightBound)) ::Pathfinding::ClipperLib::TEdge*  RightBound;

/// @brief Field Y, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Y, put=__cordl_internal_set_Y)) int64_t  Y;

static inline ::Pathfinding::ClipperLib::LocalMinima* New_ctor() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_LeftBound() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_LeftBound() ;

constexpr ::Pathfinding::ClipperLib::LocalMinima* const& __cordl_internal_get_Next() const;

constexpr ::Pathfinding::ClipperLib::LocalMinima*& __cordl_internal_get_Next() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_RightBound() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_RightBound() ;

constexpr int64_t const& __cordl_internal_get_Y() const;

constexpr int64_t& __cordl_internal_get_Y() ;

constexpr void __cordl_internal_set_LeftBound(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_Next(::Pathfinding::ClipperLib::LocalMinima*  value) ;

constexpr void __cordl_internal_set_RightBound(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_Y(int64_t  value) ;

/// @brief Method .ctor, addr 0xa6835d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalMinima() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalMinima", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalMinima(LocalMinima && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalMinima", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalMinima(LocalMinima const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31657};

/// @brief Field Y, offset: 0x10, size: 0x8, def value: None
 int64_t  ___Y;

/// @brief Field LeftBound, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___LeftBound;

/// @brief Field RightBound, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___RightBound;

/// @brief Field Next, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::LocalMinima*  ___Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::LocalMinima, ___Y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::LocalMinima, ___LeftBound) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::LocalMinima, ___RightBound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::LocalMinima, ___Next) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::LocalMinima) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
