#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioSystem)
namespace Meta::Voice::Audio {
struct AudioClipSettings;
}
namespace Meta::Voice::Audio {
class IAudioClipStream;
}
namespace Meta::Voice::Audio {
class IAudioPlayer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class IAudioSystem;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::IAudioSystem*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::IAudioSystem*, "Meta.Voice.Audio", "IAudioSystem");
// Dependencies 
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.IAudioSystem
class CORDL_TYPE IAudioSystem {
public:
// Declarations
 __declspec(property(put=set_ClipSettings)) ::Meta::Voice::Audio::AudioClipSettings  ClipSettings;

/// @brief Method GetAudioClipStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Audio::IAudioClipStream* GetAudioClipStream() ;

/// @brief Method GetAudioPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Audio::IAudioPlayer* GetAudioPlayer(::UnityEngine::GameObject*  root) ;

/// @brief Method PreloadClipStreams, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PreloadClipStreams(int32_t  total) ;

/// @brief Method set_ClipSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ClipSettings(::Meta::Voice::Audio::AudioClipSettings  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioSystem(IAudioSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25514};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Audio
