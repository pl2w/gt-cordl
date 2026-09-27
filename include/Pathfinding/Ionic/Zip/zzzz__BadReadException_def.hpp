#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/BadReadException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BadReadException)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class BadReadException;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::BadReadException*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::BadReadException*, "Pathfinding.Ionic.Zip", "BadReadException");
// [Guid("ebc25cf6-9120-4283-b972-0e5520d0000A")]
// Dependencies Pathfinding.Ionic.Zip.ZipException
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.BadReadException
class CORDL_TYPE BadReadException : public ::Pathfinding::Ionic::Zip::ZipException {
public:
// Declarations
static inline ::Pathfinding::Ionic::Zip::BadReadException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xa68c878, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BadReadException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BadReadException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BadReadException(BadReadException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BadReadException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BadReadException(BadReadException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::BadReadException) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
