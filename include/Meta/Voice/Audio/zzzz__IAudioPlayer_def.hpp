#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioPlayer)
namespace Meta::Voice::Audio {
class IAudioClipStream;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class IAudioPlayer;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::IAudioPlayer*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::IAudioPlayer*, "Meta.Voice.Audio", "IAudioPlayer");
// Dependencies 
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.IAudioPlayer
class CORDL_TYPE IAudioPlayer {
public:
// Declarations
 __declspec(property(get=get_CanSetElapsedSamples)) bool  CanSetElapsedSamples;

 __declspec(property(get=get_ClipStream)) ::Meta::Voice::Audio::IAudioClipStream*  ClipStream;

 __declspec(property(get=get_ElapsedSamples)) int32_t  ElapsedSamples;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

/// @brief Method GetPlaybackErrors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetPlaybackErrors() ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Init() ;

/// @brief Method Pause, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Pause() ;

/// @brief Method Play, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Play(::Meta::Voice::Audio::IAudioClipStream*  clipStream, int32_t  offsetSamples, ::Meta::WitAi::Json::WitResponseNode*  speechNode) ;

/// @brief Method Resume, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Resume() ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Stop() ;

/// @brief Method get_CanSetElapsedSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_CanSetElapsedSamples() ;

/// @brief Method get_ClipStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Audio::IAudioClipStream* get_ClipStream() ;

/// @brief Method get_ElapsedSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ElapsedSamples() ;

/// @brief Method get_IsPlaying, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsPlaying() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioPlayer(IAudioPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Audio
