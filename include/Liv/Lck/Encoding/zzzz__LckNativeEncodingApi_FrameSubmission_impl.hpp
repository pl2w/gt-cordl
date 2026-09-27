#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_FrameSubmission.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_FrameSubmission_def.hpp"
// Ctor Parameters [CppParam { name: "encoderContext", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureIDs", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureIDsSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "videoTimestampMilli", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioTracksSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioTracks", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readyFramesSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readyFrames", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckNativeEncodingApi_FrameSubmission::LckNativeEncodingApi_FrameSubmission(::System::IntPtr  encoderContext, ::System::IntPtr  textureIDs, uint32_t  textureIDsSize, uint64_t  videoTimestampMilli, uint32_t  audioTracksSize, ::System::IntPtr  audioTracks, uint32_t  readyFramesSize, ::System::IntPtr  readyFrames) noexcept  {
this->encoderContext = encoderContext;
this->textureIDs = textureIDs;
this->textureIDsSize = textureIDsSize;
this->videoTimestampMilli = videoTimestampMilli;
this->audioTracksSize = audioTracksSize;
this->audioTracks = audioTracks;
this->readyFramesSize = readyFramesSize;
this->readyFrames = readyFrames;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckNativeEncodingApi_FrameSubmission::LckNativeEncodingApi_FrameSubmission()   {
}
