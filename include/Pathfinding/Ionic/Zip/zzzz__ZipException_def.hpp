#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ZipException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipException;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipException*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipException*, "Pathfinding.Ionic.Zip", "ZipException");
// [Guid("ebc25cf6-9120-4283-b972-0e5520d00006")]
// Dependencies System.Exception
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipException
class CORDL_TYPE ZipException : public ::System::Exception {
public:
// Declarations
static inline ::Pathfinding::Ionic::Zip::ZipException* New_ctor() ;

static inline ::Pathfinding::Ionic::Zip::ZipException* New_ctor(::StringW  message) ;

static inline ::Pathfinding::Ionic::Zip::ZipException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xa68c7b4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa68c810, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xa68c888, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipException(ZipException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipException(ZipException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28152};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipException) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
