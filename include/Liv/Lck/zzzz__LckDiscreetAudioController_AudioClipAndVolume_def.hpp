#pragma once
// IWYU pragma private; include "Liv/Lck/LckDiscreetAudioController_AudioClipAndVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LckDiscreetAudioController_AudioClipAndVolume)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckDiscreetAudioController_AudioClipAndVolume;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume, "Liv.Lck", "LckDiscreetAudioController/AudioClipAndVolume");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckDiscreetAudioController/AudioClipAndVolume
struct CORDL_TYPE LckDiscreetAudioController_AudioClipAndVolume {
public:
// Declarations
/// @brief Method .ctor, addr 0x9ce0ee8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AudioClip*  clip, float_t  volume) ;

// Ctor Parameters []
// @brief default ctor
constexpr LckDiscreetAudioController_AudioClipAndVolume() ;

// Ctor Parameters [CppParam { name: "clip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LckDiscreetAudioController_AudioClipAndVolume(::UnityW<::UnityEngine::AudioClip>  clip, float_t  volume) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24698};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field clip, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  clip;

/// @brief Field volume, offset: 0x8, size: 0x4, def value: None
 float_t  volume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume, clip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume, volume) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
