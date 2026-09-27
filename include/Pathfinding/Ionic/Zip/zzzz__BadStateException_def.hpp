#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/BadStateException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BadStateException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class BadStateException;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::BadStateException*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::BadStateException*, "Pathfinding.Ionic.Zip", "BadStateException");
// [Guid("ebc25cf6-9120-4283-b972-0e5520d00007")]
// Dependencies Pathfinding.Ionic.Zip.ZipException
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.BadStateException
class CORDL_TYPE BadStateException : public ::Pathfinding::Ionic::Zip::ZipException {
public:
// Declarations
static inline ::Pathfinding::Ionic::Zip::BadStateException* New_ctor(::StringW  message) ;

static inline ::Pathfinding::Ionic::Zip::BadStateException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xa68c880, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xa68c884, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BadStateException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BadStateException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BadStateException(BadStateException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BadStateException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BadStateException(BadStateException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28151};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::BadStateException) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
