#pragma once
// IWYU pragma private; include "Photon/Voice/VideoInEnumeratorNotSupported.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__DeviceEnumeratorNotSupported_def.hpp"
CORDL_MODULE_EXPORT(VideoInEnumeratorNotSupported)
namespace Photon::Voice {
class ILogger;
}
// Forward declare root types
namespace Photon::Voice {
class VideoInEnumeratorNotSupported;
}
// Write type traits
MARK_REF_T(::Photon::Voice::VideoInEnumeratorNotSupported*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::VideoInEnumeratorNotSupported*, "Photon.Voice", "VideoInEnumeratorNotSupported");
// Dependencies Photon.Voice.DeviceEnumeratorNotSupported
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VideoInEnumeratorNotSupported
class CORDL_TYPE VideoInEnumeratorNotSupported : public ::Photon::Voice::DeviceEnumeratorNotSupported {
public:
// Declarations
static inline ::Photon::Voice::VideoInEnumeratorNotSupported* New_ctor(::Photon::Voice::ILogger*  logger) ;

/// @brief Method .ctor, addr 0xa746398, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoInEnumeratorNotSupported() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoInEnumeratorNotSupported", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoInEnumeratorNotSupported(VideoInEnumeratorNotSupported && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoInEnumeratorNotSupported", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoInEnumeratorNotSupported(VideoInEnumeratorNotSupported const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28406};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::VideoInEnumeratorNotSupported) == 0x30, "Size mismatch!");

} // namespace end def Photon::Voice
