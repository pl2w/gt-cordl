#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_TrackInfo.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_TrackType_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_TrackInfo_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::LckNativeEncodingApi_TrackType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bitrate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "width", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "framerate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "samplerate", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "channels", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckNativeEncodingApi_TrackInfo::LckNativeEncodingApi_TrackInfo(::GlobalNamespace::LckNativeEncodingApi_TrackType  type, uint32_t  bitrate, uint32_t  width, uint32_t  height, uint32_t  framerate, uint32_t  samplerate, uint32_t  channels) noexcept  {
this->type = type;
this->bitrate = bitrate;
this->width = width;
this->height = height;
this->framerate = framerate;
this->samplerate = samplerate;
this->channels = channels;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckNativeEncodingApi_TrackInfo::LckNativeEncodingApi_TrackInfo()   {
}
