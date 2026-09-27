#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_SoundEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameStateFx_SoundEntry_EOptions_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GameStateFx_SoundEntry)
namespace GlobalNamespace {
struct SoundEntry_GameStateFx_EOptions;
}
namespace UnityEngine::Audio {
class AudioResource;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameStateFx_SoundEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameStateFx_SoundEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameStateFx_SoundEntry, "", "GameStateFx/SoundEntry");
// Dependencies GameStateFx::SoundEntry::EOptions
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameStateFx/SoundEntry
struct CORDL_TYPE GameStateFx_SoundEntry {
public:
// Declarations
using EOptions = ::GlobalNamespace::SoundEntry_GameStateFx_EOptions;

// Ctor Parameters []
// @brief default ctor
constexpr GameStateFx_SoundEntry() ;

// Ctor Parameters [CppParam { name: "options", ty: "::GlobalNamespace::SoundEntry_GameStateFx_EOptions", modifiers: "", def_value: None, comment: None }, CppParam { name: "source", ty: "::UnityW<::UnityEngine::AudioSource>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sound", ty: "::UnityW<::UnityEngine::Audio::AudioResource>", modifiers: "", def_value: None, comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pitch", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GameStateFx_SoundEntry(::GlobalNamespace::SoundEntry_GameStateFx_EOptions  options, ::UnityW<::UnityEngine::AudioSource>  source, ::UnityW<::UnityEngine::Audio::AudioResource>  sound, float_t  volume, float_t  pitch) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field options, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SoundEntry_GameStateFx_EOptions  options;

/// @brief Field source, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  source;

/// @brief Field sound, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioResource>  sound;

/// @brief Field volume, offset: 0x18, size: 0x4, def value: None
 float_t  volume;

/// @brief Field pitch, offset: 0x1c, size: 0x4, def value: None
 float_t  pitch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameStateFx_SoundEntry, options) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_SoundEntry, source) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_SoundEntry, sound) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_SoundEntry, volume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_SoundEntry, pitch) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameStateFx_SoundEntry) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
