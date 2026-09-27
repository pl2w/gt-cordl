#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTAudioOneShot_DelayedPlayData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GTAudioOneShot_DelayedPlayData)
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTAudioOneShot_DelayedPlayData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTAudioOneShot_DelayedPlayData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTAudioOneShot_DelayedPlayData, "GorillaTag.Audio", "GTAudioOneShot/DelayedPlayData");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Audio.GTAudioOneShot/DelayedPlayData
struct CORDL_TYPE GTAudioOneShot_DelayedPlayData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTAudioOneShot_DelayedPlayData() ;

// Ctor Parameters [CppParam { name: "sound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "xform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pitch", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GTAudioOneShot_DelayedPlayData(::UnityW<::UnityEngine::AudioClip>  sound, ::UnityW<::UnityEngine::Transform>  xform, ::UnityEngine::Vector3  pos, float_t  volume, float_t  pitch) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4781};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field sound, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  sound;

/// @brief Field xform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  xform;

/// @brief Field pos, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  pos;

/// @brief Field volume, offset: 0x1c, size: 0x4, def value: None
 float_t  volume;

/// @brief Field pitch, offset: 0x20, size: 0x4, def value: None
 float_t  pitch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTAudioOneShot_DelayedPlayData, sound) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAudioOneShot_DelayedPlayData, xform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAudioOneShot_DelayedPlayData, pos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAudioOneShot_DelayedPlayData, volume) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAudioOneShot_DelayedPlayData, pitch) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTAudioOneShot_DelayedPlayData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
