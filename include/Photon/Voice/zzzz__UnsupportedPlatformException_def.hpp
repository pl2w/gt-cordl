#pragma once
// IWYU pragma private; include "Photon/Voice/UnsupportedPlatformException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnsupportedPlatformException)
// Forward declare root types
namespace Photon::Voice {
class UnsupportedPlatformException;
}
// Write type traits
MARK_REF_T(::Photon::Voice::UnsupportedPlatformException*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::UnsupportedPlatformException*, "Photon.Voice", "UnsupportedPlatformException");
// Dependencies System.Exception
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.UnsupportedPlatformException
class CORDL_TYPE UnsupportedPlatformException : public ::System::Exception {
public:
// Declarations
static inline ::Photon::Voice::UnsupportedPlatformException* New_ctor(::StringW  subject, ::StringW  platform) ;

/// @brief Method .ctor, addr 0xa7531e8, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::StringW  subject, ::StringW  platform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsupportedPlatformException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsupportedPlatformException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsupportedPlatformException(UnsupportedPlatformException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsupportedPlatformException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsupportedPlatformException(UnsupportedPlatformException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28473};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::UnsupportedPlatformException) == 0x90, "Size mismatch!");

} // namespace end def Photon::Voice
