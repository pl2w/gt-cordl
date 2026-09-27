#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_AudioTrack.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_AudioTrack_def.hpp"
// Ctor Parameters [CppParam { name: "trackIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timestampSamples", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dataSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckNativeEncodingApi_AudioTrack::LckNativeEncodingApi_AudioTrack(uint32_t  trackIndex, uint64_t  timestampSamples, uint32_t  dataSize, ::System::IntPtr  data) noexcept  {
this->trackIndex = trackIndex;
this->timestampSamples = timestampSamples;
this->dataSize = dataSize;
this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckNativeEncodingApi_AudioTrack::LckNativeEncodingApi_AudioTrack()   {
}
