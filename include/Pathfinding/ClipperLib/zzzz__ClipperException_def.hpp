#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/ClipperException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ClipperException)
// Forward declare root types
namespace Pathfinding::ClipperLib {
class ClipperException;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::ClipperException*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::ClipperException*, "Pathfinding.ClipperLib", "ClipperException");
// Dependencies System.Exception
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.ClipperException
class CORDL_TYPE ClipperException : public ::System::Exception {
public:
// Declarations
static inline ::Pathfinding::ClipperLib::ClipperException* New_ctor(::StringW  description) ;

/// @brief Method .ctor, addr 0xa68bb50, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  description) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipperException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipperException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipperException(ClipperException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipperException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipperException(ClipperException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::ClipperLib::ClipperException) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
