#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioSourceProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioSourceProvider)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class IAudioSourceProvider;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::IAudioSourceProvider*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::IAudioSourceProvider*, "Meta.Voice.Audio", "IAudioSourceProvider");
// Dependencies 
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.IAudioSourceProvider
class CORDL_TYPE IAudioSourceProvider {
public:
// Declarations
 __declspec(property(get=get_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  AudioSource;

/// @brief Method get_AudioSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::AudioSource> get_AudioSource() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioSourceProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioSourceProvider(IAudioSourceProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25512};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Audio
