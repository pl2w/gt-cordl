#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWitRequestSettings.hpp"
#include "Meta/WitAi/zzzz__TTSWitAudioType_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWitRequestSettings_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
// Ctor Parameters [CppParam { name: "_configuration", ty: "::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioType", ty: "::Meta::WitAi::TTSWitAudioType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioStream", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "useEvents", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioStreamPreloadCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioReadyDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioMaxDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings::TTSWitRequestSettings(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  _configuration, ::Meta::WitAi::TTSWitAudioType  audioType, bool  audioStream, bool  useEvents, int32_t  audioStreamPreloadCount, float_t  audioReadyDuration, float_t  audioMaxDuration) noexcept  {
this->_configuration = _configuration;
this->audioType = audioType;
this->audioStream = audioStream;
this->useEvents = useEvents;
this->audioStreamPreloadCount = audioStreamPreloadCount;
this->audioReadyDuration = audioReadyDuration;
this->audioMaxDuration = audioMaxDuration;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings::TTSWitRequestSettings()   {
}
