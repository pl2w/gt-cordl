#pragma once
// IWYU pragma private; include "Photon/Voice/AudioInEnumeratorNotSupported.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__DeviceEnumeratorNotSupported_def.hpp"
CORDL_MODULE_EXPORT(AudioInEnumeratorNotSupported)
namespace Photon::Voice {
class ILogger;
}
// Forward declare root types
namespace Photon::Voice {
class AudioInEnumeratorNotSupported;
}
// Write type traits
MARK_REF_T(::Photon::Voice::AudioInEnumeratorNotSupported*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioInEnumeratorNotSupported*, "Photon.Voice", "AudioInEnumeratorNotSupported");
// Dependencies Photon.Voice.DeviceEnumeratorNotSupported
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioInEnumeratorNotSupported
class CORDL_TYPE AudioInEnumeratorNotSupported : public ::Photon::Voice::DeviceEnumeratorNotSupported {
public:
// Declarations
static inline ::Photon::Voice::AudioInEnumeratorNotSupported* New_ctor(::Photon::Voice::ILogger*  logger) ;

/// @brief Method .ctor, addr 0xa746330, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioInEnumeratorNotSupported() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioInEnumeratorNotSupported", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioInEnumeratorNotSupported(AudioInEnumeratorNotSupported && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioInEnumeratorNotSupported", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioInEnumeratorNotSupported(AudioInEnumeratorNotSupported const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28405};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::AudioInEnumeratorNotSupported) == 0x30, "Size mismatch!");

} // namespace end def Photon::Voice
