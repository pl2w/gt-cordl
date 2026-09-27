#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityDelayedDestroy_Options.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_BeepPhase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GameEntityDelayedDestroy_Options)
namespace GlobalNamespace {
struct GameEntityDelayedDestroy_BeepPhase;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityDelayedDestroy_Options;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityDelayedDestroy_Options);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityDelayedDestroy_Options, "", "GameEntityDelayedDestroy/Options");
// Dependencies GameEntityDelayedDestroy::BeepPhase
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityDelayedDestroy/Options
struct CORDL_TYPE GameEntityDelayedDestroy_Options {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityDelayedDestroy_Options() ;

// Ctor Parameters [CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioSource", ty: "::UnityW<::UnityEngine::AudioSource>", modifiers: "", def_value: None, comment: None }, CppParam { name: "explosionSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "explosionVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pooledExplosionPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "beepSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "beepVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "beepPhases", ty: "::ArrayW<::GlobalNamespace::GameEntityDelayedDestroy_BeepPhase>", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityDelayedDestroy_Options(float_t  delay, ::UnityW<::UnityEngine::AudioSource>  audioSource, ::UnityW<::UnityEngine::AudioClip>  explosionSound, float_t  explosionVolume, ::UnityW<::UnityEngine::GameObject>  pooledExplosionPrefab, ::UnityW<::UnityEngine::AudioClip>  beepSound, float_t  beepVolume, ::ArrayW<::GlobalNamespace::GameEntityDelayedDestroy_BeepPhase>  beepPhases) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1735};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field delay, offset: 0x0, size: 0x4, def value: None
 float_t  delay;

/// [Tooltip("Optional. If not set then a sound will be played at the transforms position. Which if it is a long clip on a transform that moves a lot then it will feel wrong without this set.")]
/// @brief Field audioSource, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field explosionSound, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  explosionSound;

/// @brief Field explosionVolume, offset: 0x18, size: 0x4, def value: None
 float_t  explosionVolume;

/// @brief Field pooledExplosionPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  pooledExplosionPrefab;

/// @brief Field beepSound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  beepSound;

/// @brief Field beepVolume, offset: 0x30, size: 0x4, def value: None
 float_t  beepVolume;

/// [Tooltip("Beep phases keyed by seconds remaining. Must be ordered from most to least time remaining.")]
/// @brief Field beepPhases, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameEntityDelayedDestroy_BeepPhase>  beepPhases;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy_Options, delay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy_Options, audioSource) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy_Options, explosionSound) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy_Options, explosionVolume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy_Options, pooledExplosionPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy_Options, beepSound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy_Options, beepVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy_Options, beepPhases) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityDelayedDestroy_Options) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
