#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ZlibException)
// Forward declare root types
namespace Ionic::Zlib {
class ZlibException;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::ZlibException*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::ZlibException*, "Ionic.Zlib", "ZlibException");
// [Guid("ebc25cf6-9120-4283-b972-0e5520d0000E")]
// Dependencies System.Exception
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.ZlibException
class CORDL_TYPE ZlibException : public ::System::Exception {
public:
// Declarations
static inline ::Ionic::Zlib::ZlibException* New_ctor() ;

static inline ::Ionic::Zlib::ZlibException* New_ctor(::StringW  s) ;

/// @brief Method .ctor, addr 0xa79aebc, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa79af14, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  s) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZlibException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZlibException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZlibException(ZlibException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZlibException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZlibException(ZlibException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19470};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Ionic::Zlib::ZlibException) == 0x90, "Size mismatch!");

} // namespace end def Ionic::Zlib
