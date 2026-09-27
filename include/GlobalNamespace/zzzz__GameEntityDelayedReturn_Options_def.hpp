#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityDelayedReturn_Options.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityDelayedReturn_BeepPhase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GameEntityDelayedReturn_Options)
namespace GlobalNamespace {
struct GameEntityDelayedReturn_BeepPhase;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityDelayedReturn_Options;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityDelayedReturn_Options);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityDelayedReturn_Options, "", "GameEntityDelayedReturn/Options");
// Dependencies GameEntityDelayedReturn::BeepPhase
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityDelayedReturn/Options
struct CORDL_TYPE GameEntityDelayedReturn_Options {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityDelayedReturn_Options() ;

// Ctor Parameters [CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "reappearDelay", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disappearSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "disappearVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pooledDisappearPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "reappearSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "reappearVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pooledReappearPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "beepSound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "beepVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "beepPhases", ty: "::ArrayW<::GlobalNamespace::GameEntityDelayedReturn_BeepPhase>", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityDelayedReturn_Options(float_t  delay, float_t  reappearDelay, ::UnityW<::UnityEngine::AudioClip>  disappearSound, float_t  disappearVolume, ::UnityW<::UnityEngine::GameObject>  pooledDisappearPrefab, ::UnityW<::UnityEngine::AudioClip>  reappearSound, float_t  reappearVolume, ::UnityW<::UnityEngine::GameObject>  pooledReappearPrefab, ::UnityW<::UnityEngine::AudioClip>  beepSound, float_t  beepVolume, ::ArrayW<::GlobalNamespace::GameEntityDelayedReturn_BeepPhase>  beepPhases) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1738};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field delay, offset: 0x0, size: 0x4, def value: None
 float_t  delay;

/// [Tooltip("Seconds the entity stays hidden between disappear and reappear.")]
/// @brief Field reappearDelay, offset: 0x4, size: 0x4, def value: None
 float_t  reappearDelay;

/// @brief Field disappearSound, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  disappearSound;

/// @brief Field disappearVolume, offset: 0x10, size: 0x4, def value: None
 float_t  disappearVolume;

/// @brief Field pooledDisappearPrefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  pooledDisappearPrefab;

/// @brief Field reappearSound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  reappearSound;

/// @brief Field reappearVolume, offset: 0x28, size: 0x4, def value: None
 float_t  reappearVolume;

/// @brief Field pooledReappearPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  pooledReappearPrefab;

/// @brief Field beepSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  beepSound;

/// @brief Field beepVolume, offset: 0x40, size: 0x4, def value: None
 float_t  beepVolume;

/// [Tooltip("Beep phases keyed by seconds remaining. Must be ordered from most to least time remaining.")]
/// @brief Field beepPhases, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameEntityDelayedReturn_BeepPhase>  beepPhases;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, delay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, reappearDelay) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, disappearSound) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, disappearVolume) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, pooledDisappearPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, reappearSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, reappearVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, pooledReappearPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, beepSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, beepVolume) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_Options, beepPhases) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityDelayedReturn_Options) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
