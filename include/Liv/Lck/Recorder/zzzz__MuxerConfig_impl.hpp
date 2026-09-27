#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/MuxerConfig.hpp"
#include "Liv/Lck/Recorder/zzzz__MuxerConfig_def.hpp"
// Ctor Parameters [CppParam { name: "outputPath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "videoBitrate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioBitrate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "width", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "framerate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "samplerate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "channels", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numberOfTracks", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "realtimeOutput", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Recorder::MuxerConfig::MuxerConfig(::StringW  outputPath, uint32_t  videoBitrate, uint32_t  audioBitrate, uint32_t  width, uint32_t  height, uint32_t  framerate, uint32_t  samplerate, uint32_t  channels, uint32_t  numberOfTracks, bool  realtimeOutput) noexcept  {
this->outputPath = outputPath;
this->videoBitrate = videoBitrate;
this->audioBitrate = audioBitrate;
this->width = width;
this->height = height;
this->framerate = framerate;
this->samplerate = samplerate;
this->channels = channels;
this->numberOfTracks = numberOfTracks;
this->realtimeOutput = realtimeOutput;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Recorder::MuxerConfig::MuxerConfig()   {
}
