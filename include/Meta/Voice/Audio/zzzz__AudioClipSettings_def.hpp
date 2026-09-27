#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/AudioClipSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClipSettings)
// Forward declare root types
namespace Meta::Voice::Audio {
struct AudioClipSettings;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Audio::AudioClipSettings);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::AudioClipSettings, "Meta.Voice.Audio", "AudioClipSettings");
// Dependencies 
namespace Meta::Voice::Audio {
// Is value type: true
// CS Name: Meta.Voice.Audio.AudioClipSettings
struct CORDL_TYPE AudioClipSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AudioClipSettings() ;

// Ctor Parameters [CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleRate", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReadyDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr AudioClipSettings(int32_t  Channels, int32_t  SampleRate, float_t  ReadyDuration, float_t  MaxDuration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25513};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Channels, offset: 0x0, size: 0x4, def value: None
 int32_t  Channels;

/// @brief Field SampleRate, offset: 0x4, size: 0x4, def value: None
 int32_t  SampleRate;

/// @brief Field ReadyDuration, offset: 0x8, size: 0x4, def value: None
 float_t  ReadyDuration;

/// @brief Field MaxDuration, offset: 0xc, size: 0x4, def value: None
 float_t  MaxDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::AudioClipSettings, Channels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::AudioClipSettings, SampleRate) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::AudioClipSettings, ReadyDuration) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::AudioClipSettings, MaxDuration) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::AudioClipSettings) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::Audio
