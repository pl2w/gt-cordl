#pragma once
// IWYU pragma private; include "Photon/Voice/UnsupportedCodecException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnsupportedCodecException)
namespace Photon::Voice {
struct Codec;
}
// Forward declare root types
namespace Photon::Voice {
class UnsupportedCodecException;
}
// Write type traits
MARK_REF_T(::Photon::Voice::UnsupportedCodecException*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::UnsupportedCodecException*, "Photon.Voice", "UnsupportedCodecException");
// Dependencies System.Exception
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.UnsupportedCodecException
class CORDL_TYPE UnsupportedCodecException : public ::System::Exception {
public:
// Declarations
static inline ::Photon::Voice::UnsupportedCodecException* New_ctor(::StringW  info, ::Photon::Voice::Codec  codec) ;

/// @brief Method .ctor, addr 0xa7530e4, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::StringW  info, ::Photon::Voice::Codec  codec) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsupportedCodecException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsupportedCodecException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsupportedCodecException(UnsupportedCodecException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsupportedCodecException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsupportedCodecException(UnsupportedCodecException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::UnsupportedCodecException) == 0x90, "Size mismatch!");

} // namespace end def Photon::Voice
