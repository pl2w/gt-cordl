#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioClipProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioClipProvider)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class IAudioClipProvider;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::IAudioClipProvider*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::IAudioClipProvider*, "Meta.Voice.Audio", "IAudioClipProvider");
// Dependencies 
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.IAudioClipProvider
class CORDL_TYPE IAudioClipProvider {
public:
// Declarations
 __declspec(property(get=get_Clip)) ::UnityW<::UnityEngine::AudioClip>  Clip;

/// @brief Method get_Clip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Clip() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioClipProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioClipProvider(IAudioClipProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25507};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Audio
