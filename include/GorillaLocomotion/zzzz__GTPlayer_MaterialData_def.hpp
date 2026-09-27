#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_MaterialData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTPlayer_MaterialData)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTPlayer_MaterialData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTPlayer_MaterialData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPlayer_MaterialData, "GorillaLocomotion", "GTPlayer/MaterialData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.GTPlayer/MaterialData
struct CORDL_TYPE GTPlayer_MaterialData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTPlayer_MaterialData() ;

// Ctor Parameters [CppParam { name: "matName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "overrideAudio", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "audio", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "overrideSlidePercent", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "slidePercent", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfaceEffectIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTPlayer_MaterialData(::StringW  matName, bool  overrideAudio, ::UnityW<::UnityEngine::AudioClip>  audio, bool  overrideSlidePercent, float_t  slidePercent, int32_t  surfaceEffectIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field matName, offset: 0x0, size: 0x8, def value: None
 ::StringW  matName;

/// @brief Field overrideAudio, offset: 0x8, size: 0x1, def value: None
 bool  overrideAudio;

/// @brief Field audio, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  audio;

/// @brief Field overrideSlidePercent, offset: 0x18, size: 0x1, def value: None
 bool  overrideSlidePercent;

/// @brief Field slidePercent, offset: 0x1c, size: 0x4, def value: None
 float_t  slidePercent;

/// @brief Field surfaceEffectIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  surfaceEffectIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTPlayer_MaterialData, matName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_MaterialData, overrideAudio) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_MaterialData, audio) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_MaterialData, overrideSlidePercent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_MaterialData, slidePercent) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_MaterialData, surfaceEffectIndex) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTPlayer_MaterialData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
