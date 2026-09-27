#pragma once
// IWYU pragma private; include "Meta/WitAi/Configuration/WitRuntimeConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WitRuntimeConfiguration)
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Interfaces {
class CustomTranscriptionProvider;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Configuration::WitRuntimeConfiguration*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Configuration::WitRuntimeConfiguration*, "Meta.WitAi.Configuration", "WitRuntimeConfiguration");
// Dependencies Meta.Voice.Net.PubSub.PubSubSettings, System.Object
namespace Meta::WitAi::Configuration {
// Is value type: false
// CS Name: Meta.WitAi.Configuration.WitRuntimeConfiguration
class CORDL_TYPE WitRuntimeConfiguration : public ::System::Object {
public:
// Declarations
/// @brief Field OnConfigurationUpdated, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConfigurationUpdated, put=__cordl_internal_set_OnConfigurationUpdated)) ::System::Action*  OnConfigurationUpdated;

/// @brief Field alwaysRecord, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysRecord, put=__cordl_internal_set_alwaysRecord)) bool  alwaysRecord;

/// @brief Field customTranscriptionProvider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_customTranscriptionProvider, put=__cordl_internal_set_customTranscriptionProvider)) ::UnityW<::Meta::WitAi::Interfaces::CustomTranscriptionProvider>  customTranscriptionProvider;

/// @brief Field maxConcurrentRequests, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxConcurrentRequests, put=__cordl_internal_set_maxConcurrentRequests)) int32_t  maxConcurrentRequests;

/// @brief Field maxRecordingTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRecordingTime, put=__cordl_internal_set_maxRecordingTime)) float_t  maxRecordingTime;

/// @brief Field micBufferLengthInSeconds, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_micBufferLengthInSeconds, put=__cordl_internal_set_micBufferLengthInSeconds)) float_t  micBufferLengthInSeconds;

/// @brief Field minKeepAliveTimeInSeconds, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minKeepAliveTimeInSeconds, put=__cordl_internal_set_minKeepAliveTimeInSeconds)) float_t  minKeepAliveTimeInSeconds;

/// @brief Field minKeepAliveVolume, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_minKeepAliveVolume, put=__cordl_internal_set_minKeepAliveVolume)) float_t  minKeepAliveVolume;

/// @brief Field minTranscriptionKeepAliveTimeInSeconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTranscriptionKeepAliveTimeInSeconds, put=__cordl_internal_set_minTranscriptionKeepAliveTimeInSeconds)) float_t  minTranscriptionKeepAliveTimeInSeconds;

/// @brief Field overrideTimeoutMs, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_overrideTimeoutMs, put=__cordl_internal_set_overrideTimeoutMs)) int32_t  overrideTimeoutMs;

/// @brief Field preferredActivationOffset, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_preferredActivationOffset, put=__cordl_internal_set_preferredActivationOffset)) float_t  preferredActivationOffset;

/// @brief Field pubSubSettings, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_pubSubSettings, put=__cordl_internal_set_pubSubSettings)) ::Meta::Voice::Net::PubSub::PubSubSettings  pubSubSettings;

/// @brief Field sampleLengthInMs, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleLengthInMs, put=__cordl_internal_set_sampleLengthInMs)) int32_t  sampleLengthInMs;

/// @brief Field sendAudioToWit, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendAudioToWit, put=__cordl_internal_set_sendAudioToWit)) bool  sendAudioToWit;

/// @brief Field soundWakeThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundWakeThreshold, put=__cordl_internal_set_soundWakeThreshold)) float_t  soundWakeThreshold;

/// @brief Field transcribeOnly, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_transcribeOnly, put=__cordl_internal_set_transcribeOnly)) bool  transcribeOnly;

/// @brief Field witConfiguration, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_witConfiguration, put=__cordl_internal_set_witConfiguration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  witConfiguration;

static inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_OnConfigurationUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnConfigurationUpdated() ;

constexpr bool const& __cordl_internal_get_alwaysRecord() const;

constexpr bool& __cordl_internal_get_alwaysRecord() ;

constexpr ::UnityW<::Meta::WitAi::Interfaces::CustomTranscriptionProvider> const& __cordl_internal_get_customTranscriptionProvider() const;

constexpr ::UnityW<::Meta::WitAi::Interfaces::CustomTranscriptionProvider>& __cordl_internal_get_customTranscriptionProvider() ;

constexpr int32_t const& __cordl_internal_get_maxConcurrentRequests() const;

constexpr int32_t& __cordl_internal_get_maxConcurrentRequests() ;

constexpr float_t const& __cordl_internal_get_maxRecordingTime() const;

constexpr float_t& __cordl_internal_get_maxRecordingTime() ;

constexpr float_t const& __cordl_internal_get_micBufferLengthInSeconds() const;

constexpr float_t& __cordl_internal_get_micBufferLengthInSeconds() ;

constexpr float_t const& __cordl_internal_get_minKeepAliveTimeInSeconds() const;

constexpr float_t& __cordl_internal_get_minKeepAliveTimeInSeconds() ;

constexpr float_t const& __cordl_internal_get_minKeepAliveVolume() const;

constexpr float_t& __cordl_internal_get_minKeepAliveVolume() ;

constexpr float_t const& __cordl_internal_get_minTranscriptionKeepAliveTimeInSeconds() const;

constexpr float_t& __cordl_internal_get_minTranscriptionKeepAliveTimeInSeconds() ;

constexpr int32_t const& __cordl_internal_get_overrideTimeoutMs() const;

constexpr int32_t& __cordl_internal_get_overrideTimeoutMs() ;

constexpr float_t const& __cordl_internal_get_preferredActivationOffset() const;

constexpr float_t& __cordl_internal_get_preferredActivationOffset() ;

constexpr ::Meta::Voice::Net::PubSub::PubSubSettings const& __cordl_internal_get_pubSubSettings() const;

constexpr ::Meta::Voice::Net::PubSub::PubSubSettings& __cordl_internal_get_pubSubSettings() ;

constexpr int32_t const& __cordl_internal_get_sampleLengthInMs() const;

constexpr int32_t& __cordl_internal_get_sampleLengthInMs() ;

constexpr bool const& __cordl_internal_get_sendAudioToWit() const;

constexpr bool& __cordl_internal_get_sendAudioToWit() ;

constexpr float_t const& __cordl_internal_get_soundWakeThreshold() const;

constexpr float_t& __cordl_internal_get_soundWakeThreshold() ;

constexpr bool const& __cordl_internal_get_transcribeOnly() const;

constexpr bool& __cordl_internal_get_transcribeOnly() ;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& __cordl_internal_get_witConfiguration() const;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& __cordl_internal_get_witConfiguration() ;

constexpr void __cordl_internal_set_OnConfigurationUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_alwaysRecord(bool  value) ;

constexpr void __cordl_internal_set_customTranscriptionProvider(::UnityW<::Meta::WitAi::Interfaces::CustomTranscriptionProvider>  value) ;

constexpr void __cordl_internal_set_maxConcurrentRequests(int32_t  value) ;

constexpr void __cordl_internal_set_maxRecordingTime(float_t  value) ;

constexpr void __cordl_internal_set_micBufferLengthInSeconds(float_t  value) ;

constexpr void __cordl_internal_set_minKeepAliveTimeInSeconds(float_t  value) ;

constexpr void __cordl_internal_set_minKeepAliveVolume(float_t  value) ;

constexpr void __cordl_internal_set_minTranscriptionKeepAliveTimeInSeconds(float_t  value) ;

constexpr void __cordl_internal_set_overrideTimeoutMs(int32_t  value) ;

constexpr void __cordl_internal_set_preferredActivationOffset(float_t  value) ;

constexpr void __cordl_internal_set_pubSubSettings(::Meta::Voice::Net::PubSub::PubSubSettings  value) ;

constexpr void __cordl_internal_set_sampleLengthInMs(int32_t  value) ;

constexpr void __cordl_internal_set_sendAudioToWit(bool  value) ;

constexpr void __cordl_internal_set_soundWakeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_transcribeOnly(bool  value) ;

constexpr void __cordl_internal_set_witConfiguration(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value) ;

/// @brief Method .ctor, addr 0x9e96bf4, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRuntimeConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRuntimeConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRuntimeConfiguration(WitRuntimeConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRuntimeConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRuntimeConfiguration(WitRuntimeConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25691};

/// [Tooltip("Configuration for the application used in this instance of Wit.ai services")]
/// [SerializeField]
/// @brief Field witConfiguration, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  ___witConfiguration;

/// [Header("Keepalive")]
/// [Tooltip("The minimum volume from the mic needed to keep the activation alive")]
/// [SerializeField]
/// @brief Field minKeepAliveVolume, offset: 0x18, size: 0x4, def value: None
 float_t  ___minKeepAliveVolume;

/// [FormerlySerializedAs("minKeepAliveTime")]
/// [Tooltip("The amount of time in seconds an activation will be kept open after volume is under the keep alive threshold")]
/// [SerializeField]
/// [DynamicRange("RecordingTimeRange", -340282350000000000000000000000000000000, 340282350000000000000000000000000000000)]
/// @brief Field minKeepAliveTimeInSeconds, offset: 0x1c, size: 0x4, def value: None
 float_t  ___minKeepAliveTimeInSeconds;

/// [FormerlySerializedAs("minTranscriptionKeepAliveTime")]
/// [Tooltip("The amount of time in seconds an activation will be kept open after words have been detected in the live transcription")]
/// [SerializeField]
/// [DynamicRange("RecordingTimeRange", -340282350000000000000000000000000000000, 340282350000000000000000000000000000000)]
/// @brief Field minTranscriptionKeepAliveTimeInSeconds, offset: 0x20, size: 0x4, def value: None
 float_t  ___minTranscriptionKeepAliveTimeInSeconds;

/// [Tooltip("The maximum amount of time in seconds the mic will stay active")]
/// [SerializeField]
/// [DynamicRange("RecordingTimeRange", -340282350000000000000000000000000000000, 340282350000000000000000000000000000000)]
/// @brief Field maxRecordingTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxRecordingTime;

/// [Tooltip("Overidde the current configuration timeout if greater than 0")]
/// @brief Field overrideTimeoutMs, offset: 0x28, size: 0x4, def value: None
 int32_t  ___overrideTimeoutMs;

/// [Header("Sound Activation")]
/// [Tooltip("The minimum volume level needed to be heard to start collecting data from the audio source.")]
/// [SerializeField]
/// @brief Field soundWakeThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___soundWakeThreshold;

/// [Tooltip("The length of the individual samples read from the audio source")]
/// [Range(10, 500)]
/// [SerializeField]
/// @brief Field sampleLengthInMs, offset: 0x30, size: 0x4, def value: None
 int32_t  ___sampleLengthInMs;

/// [Tooltip("The total audio data that should be buffered for lookback purposes on sound based activations.")]
/// [SerializeField]
/// @brief Field micBufferLengthInSeconds, offset: 0x34, size: 0x4, def value: None
 float_t  ___micBufferLengthInSeconds;

/// [Tooltip("The maximum amount of concurrent requests that can occur")]
/// [Range(1, 10)]
/// [SerializeField]
/// @brief Field maxConcurrentRequests, offset: 0x38, size: 0x4, def value: None
 int32_t  ___maxConcurrentRequests;

/// [Header("Custom Transcription")]
/// [Tooltip("If true, the audio recorded in the activation will be sent to Wit.ai for processing. If a custom transcription provider is set and this is false, only the transcription will be sent to Wit.ai for processing")]
/// [SerializeField]
/// @brief Field sendAudioToWit, offset: 0x3c, size: 0x1, def value: None
 bool  ___sendAudioToWit;

/// [Tooltip("A custom provider that returns text to be used for nlu processing on activation instead of sending audio.")]
/// [SerializeField]
/// @brief Field customTranscriptionProvider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Interfaces::CustomTranscriptionProvider>  ___customTranscriptionProvider;

/// [Tooltip("If always record is set the mic will fill the mic data buffer as long as the component is enabled in the scene.")]
/// @brief Field alwaysRecord, offset: 0x48, size: 0x1, def value: None
 bool  ___alwaysRecord;

/// [Tooltip("The preferred number of seconds to offset from the time the activation happens. A negative value here could help to catch any words that may have been cut off at the beginning of an activation (assuming input is already being read into the buffer)")]
/// @brief Field preferredActivationOffset, offset: 0x4c, size: 0x4, def value: None
 float_t  ___preferredActivationOffset;

/// [Header("Web Sockets")]
/// [Tooltip("If enabled, only transcription requests will be made.")]
/// @brief Field transcribeOnly, offset: 0x50, size: 0x1, def value: None
 bool  ___transcribeOnly;

/// [Tooltip("Various publish and subscription options available for this specific service.")]
/// @brief Field pubSubSettings, offset: 0x58, size: 0x10, def value: None
 ::Meta::Voice::Net::PubSub::PubSubSettings  ___pubSubSettings;

/// @brief Field OnConfigurationUpdated, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___OnConfigurationUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___witConfiguration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___minKeepAliveVolume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___minKeepAliveTimeInSeconds) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___minTranscriptionKeepAliveTimeInSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___maxRecordingTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___overrideTimeoutMs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___soundWakeThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___sampleLengthInMs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___micBufferLengthInSeconds) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___maxConcurrentRequests) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___sendAudioToWit) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___customTranscriptionProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___alwaysRecord) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___preferredActivationOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___transcribeOnly) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___pubSubSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRuntimeConfiguration, ___OnConfigurationUpdated) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Configuration::WitRuntimeConfiguration) == 0x70, "Size mismatch!");

} // namespace end def Meta::WitAi::Configuration
