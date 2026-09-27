#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioAnimator_AudioTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AudioAnimator_AudioTarget)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioAnimator_AudioTarget;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioAnimator_AudioTarget);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioAnimator_AudioTarget, "", "AudioAnimator/AudioTarget");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioAnimator/AudioTarget
struct CORDL_TYPE AudioAnimator_AudioTarget {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AudioAnimator_AudioTarget() ;

// Ctor Parameters [CppParam { name: "audioSource", ty: "::UnityW<::UnityEngine::AudioSource>", modifiers: "", def_value: None, comment: None }, CppParam { name: "pitchCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }, CppParam { name: "volumeCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "riseSmoothing", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lowerSmoothing", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr AudioAnimator_AudioTarget(::UnityW<::UnityEngine::AudioSource>  audioSource, ::UnityEngine::AnimationCurve*  pitchCurve, ::UnityEngine::AnimationCurve*  volumeCurve, float_t  baseVolume, float_t  riseSmoothing, float_t  lowerSmoothing) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field audioSource, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field pitchCurve, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  pitchCurve;

/// @brief Field volumeCurve, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  volumeCurve;

/// @brief Field baseVolume, offset: 0x18, size: 0x4, def value: None
 float_t  baseVolume;

/// @brief Field riseSmoothing, offset: 0x1c, size: 0x4, def value: None
 float_t  riseSmoothing;

/// @brief Field lowerSmoothing, offset: 0x20, size: 0x4, def value: None
 float_t  lowerSmoothing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioAnimator_AudioTarget, audioSource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAnimator_AudioTarget, pitchCurve) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAnimator_AudioTarget, volumeCurve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAnimator_AudioTarget, baseVolume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAnimator_AudioTarget, riseSmoothing) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAnimator_AudioTarget, lowerSmoothing) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioAnimator_AudioTarget) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
