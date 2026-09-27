#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceAudioFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__LocalVoiceAudio_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVoiceAudioFloat)
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
class IEncoder;
}
namespace Photon::Voice {
class VoiceClient;
}
namespace Photon::Voice {
struct VoiceInfo;
}
// Forward declare root types
namespace Photon::Voice {
class LocalVoiceAudioFloat;
}
// Write type traits
MARK_REF_T(::Photon::Voice::LocalVoiceAudioFloat*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::LocalVoiceAudioFloat*, "Photon.Voice", "LocalVoiceAudioFloat");
// Dependencies Photon.Voice.LocalVoiceAudio`1<T>
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.LocalVoiceAudioFloat
class CORDL_TYPE LocalVoiceAudioFloat : public ::Photon::Voice::LocalVoiceAudio_1<float_t> {
public:
// Declarations
static inline ::Photon::Voice::LocalVoiceAudioFloat* New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId) ;

/// @brief Method .ctor, addr 0xa74c2b0, size 0x154, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoiceAudioFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceAudioFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoiceAudioFloat(LocalVoiceAudioFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceAudioFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoiceAudioFloat(LocalVoiceAudioFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28449};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::LocalVoiceAudioFloat) == 0x128, "Size mismatch!");

} // namespace end def Photon::Voice
