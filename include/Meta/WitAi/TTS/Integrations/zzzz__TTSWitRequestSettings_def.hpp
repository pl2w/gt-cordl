#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWitRequestSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/zzzz__TTSWitAudioType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSWitRequestSettings)
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Integrations {
struct TTSWitRequestSettings;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings, "Meta.WitAi.TTS.Integrations", "TTSWitRequestSettings");
// Dependencies Meta.WitAi.TTSWitAudioType
namespace Meta::WitAi::TTS::Integrations {
// Is value type: true
// CS Name: Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct CORDL_TYPE TTSWitRequestSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TTSWitRequestSettings() ;

// Ctor Parameters [CppParam { name: "_configuration", ty: "::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioType", ty: "::Meta::WitAi::TTSWitAudioType", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioStream", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "useEvents", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioStreamPreloadCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioReadyDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioMaxDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TTSWitRequestSettings(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  _configuration, ::Meta::WitAi::TTSWitAudioType  audioType, bool  audioStream, bool  useEvents, int32_t  audioStreamPreloadCount, float_t  audioReadyDuration, float_t  audioMaxDuration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29133};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [FormerlySerializedAs("configuration")]
/// [Tooltip("The configuration used for audio requests.")]
/// [SerializeField]
/// @brief Field _configuration, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  _configuration;

/// [Tooltip("The desired audio type to be requested from wit.")]
/// @brief Field audioType, offset: 0x8, size: 0x4, def value: None
 ::Meta::WitAi::TTSWitAudioType  audioType;

/// [Tooltip("Whether or not audio should be streamed from wit if possible.")]
/// @brief Field audioStream, offset: 0xc, size: 0x1, def value: None
 bool  audioStream;

/// [Tooltip("Whether or not events should be requested along with audio data.")]
/// @brief Field useEvents, offset: 0xd, size: 0x1, def value: None
 bool  useEvents;

/// [Tooltip("Number of audio clip streams to pool immediately on first enable.")]
/// @brief Field audioStreamPreloadCount, offset: 0x10, size: 0x4, def value: None
 int32_t  audioStreamPreloadCount;

/// [Tooltip("The total number of seconds to be buffered in order to consider ready.")]
/// @brief Field audioReadyDuration, offset: 0x14, size: 0x4, def value: None
 float_t  audioReadyDuration;

/// [Tooltip("Maximum length of audio clip stream in seconds.")]
/// @brief Field audioMaxDuration, offset: 0x18, size: 0x4, def value: None
 float_t  audioMaxDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings, _configuration) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings, audioType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings, audioStream) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings, useEvents) == 0xd, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings, audioStreamPreloadCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings, audioReadyDuration) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings, audioMaxDuration) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
