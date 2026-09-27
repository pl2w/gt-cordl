#pragma once
// IWYU pragma private; include "Photon/Voice/UnsupportedSampleTypeException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(UnsupportedSampleTypeException)
namespace System {
class Type;
}
// Forward declare root types
namespace Photon::Voice {
class UnsupportedSampleTypeException;
}
// Write type traits
MARK_REF_T(::Photon::Voice::UnsupportedSampleTypeException*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::UnsupportedSampleTypeException*, "Photon.Voice", "UnsupportedSampleTypeException");
// Dependencies System.Exception
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.UnsupportedSampleTypeException
class CORDL_TYPE UnsupportedSampleTypeException : public ::System::Exception {
public:
// Declarations
static inline ::Photon::Voice::UnsupportedSampleTypeException* New_ctor(::System::Type*  t) ;

/// @brief Method .ctor, addr 0xa753030, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsupportedSampleTypeException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsupportedSampleTypeException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsupportedSampleTypeException(UnsupportedSampleTypeException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsupportedSampleTypeException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsupportedSampleTypeException(UnsupportedSampleTypeException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::UnsupportedSampleTypeException) == 0x90, "Size mismatch!");

} // namespace end def Photon::Voice
