#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicFadeArea_AudioSourceEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MusicFadeArea_AudioSourceEntry)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
struct MusicFadeArea_AudioSourceEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MusicFadeArea_AudioSourceEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicFadeArea_AudioSourceEntry, "", "MusicFadeArea/AudioSourceEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MusicFadeArea/AudioSourceEntry
struct CORDL_TYPE MusicFadeArea_AudioSourceEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MusicFadeArea_AudioSourceEntry() ;

// Ctor Parameters [CppParam { name: "audioSource", ty: "::UnityW<::UnityEngine::AudioSource>", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr MusicFadeArea_AudioSourceEntry(::UnityW<::UnityEngine::AudioSource>  audioSource, float_t  maxVolume) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field audioSource, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field maxVolume, offset: 0x8, size: 0x4, def value: None
 float_t  maxVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicFadeArea_AudioSourceEntry, audioSource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicFadeArea_AudioSourceEntry, maxVolume) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicFadeArea_AudioSourceEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
