#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/BadPasswordException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BadPasswordException)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class BadPasswordException;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::BadPasswordException*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::BadPasswordException*, "Pathfinding.Ionic.Zip", "BadPasswordException");
// [Guid("ebc25cf6-9120-4283-b972-0e5520d0000B")]
// Dependencies Pathfinding.Ionic.Zip.ZipException
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.BadPasswordException
class CORDL_TYPE BadPasswordException : public ::Pathfinding::Ionic::Zip::ZipException {
public:
// Declarations
static inline ::Pathfinding::Ionic::Zip::BadPasswordException* New_ctor() ;

static inline ::Pathfinding::Ionic::Zip::BadPasswordException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xa68c7b0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa68c80c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BadPasswordException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BadPasswordException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BadPasswordException(BadPasswordException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BadPasswordException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BadPasswordException(BadPasswordException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::BadPasswordException) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
