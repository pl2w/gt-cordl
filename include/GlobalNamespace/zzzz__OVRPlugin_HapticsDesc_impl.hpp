#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsDesc.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HapticsDesc_def.hpp"
// Ctor Parameters [CppParam { name: "SampleRateHz", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SampleSizeInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MinimumSafeSamplesQueued", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MinimumBufferSamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OptimalBufferSamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaximumBufferSamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_HapticsDesc::OVRPlugin_HapticsDesc(int32_t  SampleRateHz, int32_t  SampleSizeInBytes, int32_t  MinimumSafeSamplesQueued, int32_t  MinimumBufferSamplesCount, int32_t  OptimalBufferSamplesCount, int32_t  MaximumBufferSamplesCount) noexcept  {
this->SampleRateHz = SampleRateHz;
this->SampleSizeInBytes = SampleSizeInBytes;
this->MinimumSafeSamplesQueued = MinimumSafeSamplesQueued;
this->MinimumBufferSamplesCount = MinimumBufferSamplesCount;
this->OptimalBufferSamplesCount = OptimalBufferSamplesCount;
this->MaximumBufferSamplesCount = MaximumBufferSamplesCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_HapticsDesc::OVRPlugin_HapticsDesc()   {
}
