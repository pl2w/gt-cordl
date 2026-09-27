#pragma once
// IWYU pragma private; include "Meta/WitAi/Configuration/WitRuntimeConfiguration.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__CustomTranscriptionProvider_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Configuration::WitRuntimeConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Configuration::WitRuntimeConfiguration::*)()>(&::Meta::WitAi::Configuration::WitRuntimeConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e96bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_witConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witConfiguration;
}
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_witConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witConfiguration;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_witConfiguration(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___witConfiguration = value;
}
constexpr float_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_minKeepAliveVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minKeepAliveVolume;
}
constexpr float_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_minKeepAliveVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minKeepAliveVolume;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_minKeepAliveVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minKeepAliveVolume = value;
}
constexpr float_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_minKeepAliveTimeInSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minKeepAliveTimeInSeconds;
}
constexpr float_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_minKeepAliveTimeInSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minKeepAliveTimeInSeconds;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_minKeepAliveTimeInSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minKeepAliveTimeInSeconds = value;
}
constexpr float_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_minTranscriptionKeepAliveTimeInSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTranscriptionKeepAliveTimeInSeconds;
}
constexpr float_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_minTranscriptionKeepAliveTimeInSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTranscriptionKeepAliveTimeInSeconds;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_minTranscriptionKeepAliveTimeInSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTranscriptionKeepAliveTimeInSeconds = value;
}
constexpr float_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_maxRecordingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRecordingTime;
}
constexpr float_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_maxRecordingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRecordingTime;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_maxRecordingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRecordingTime = value;
}
constexpr int32_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_overrideTimeoutMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTimeoutMs;
}
constexpr int32_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_overrideTimeoutMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTimeoutMs;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_overrideTimeoutMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideTimeoutMs = value;
}
constexpr float_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_soundWakeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundWakeThreshold;
}
constexpr float_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_soundWakeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundWakeThreshold;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_soundWakeThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundWakeThreshold = value;
}
constexpr int32_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_sampleLengthInMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleLengthInMs;
}
constexpr int32_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_sampleLengthInMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleLengthInMs;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_sampleLengthInMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleLengthInMs = value;
}
constexpr float_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_micBufferLengthInSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micBufferLengthInSeconds;
}
constexpr float_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_micBufferLengthInSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micBufferLengthInSeconds;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_micBufferLengthInSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___micBufferLengthInSeconds = value;
}
constexpr int32_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_maxConcurrentRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConcurrentRequests;
}
constexpr int32_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_maxConcurrentRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConcurrentRequests;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_maxConcurrentRequests(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxConcurrentRequests = value;
}
constexpr bool& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_sendAudioToWit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendAudioToWit;
}
constexpr bool const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_sendAudioToWit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendAudioToWit;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_sendAudioToWit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendAudioToWit = value;
}
constexpr ::UnityW<::Meta::WitAi::Interfaces::CustomTranscriptionProvider>& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_customTranscriptionProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customTranscriptionProvider;
}
constexpr ::UnityW<::Meta::WitAi::Interfaces::CustomTranscriptionProvider> const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_customTranscriptionProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customTranscriptionProvider;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_customTranscriptionProvider(::UnityW<::Meta::WitAi::Interfaces::CustomTranscriptionProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customTranscriptionProvider = value;
}
constexpr bool& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_alwaysRecord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRecord;
}
constexpr bool const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_alwaysRecord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRecord;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_alwaysRecord(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysRecord = value;
}
constexpr float_t& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_preferredActivationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preferredActivationOffset;
}
constexpr float_t const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_preferredActivationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preferredActivationOffset;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_preferredActivationOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preferredActivationOffset = value;
}
constexpr bool& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_transcribeOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transcribeOnly;
}
constexpr bool const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_transcribeOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transcribeOnly;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_transcribeOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transcribeOnly = value;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubSettings& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_pubSubSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pubSubSettings;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubSettings const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_pubSubSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pubSubSettings;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_pubSubSettings(::Meta::Voice::Net::PubSub::PubSubSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pubSubSettings = value;
}
constexpr ::System::Action*& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_OnConfigurationUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConfigurationUpdated;
}
constexpr ::System::Action* const& Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_get_OnConfigurationUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConfigurationUpdated;
}
constexpr void Meta::WitAi::Configuration::WitRuntimeConfiguration::__cordl_internal_set_OnConfigurationUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConfigurationUpdated = value;
}
inline void Meta::WitAi::Configuration::WitRuntimeConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* Meta::WitAi::Configuration::WitRuntimeConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration::WitRuntimeConfiguration()   {
}
