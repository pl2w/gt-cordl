#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_HapticsPcmVibration.hpp"
#include "GlobalNamespace/zzzz__OVRInput_HapticsPcmVibration_def.hpp"
// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Append", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_HapticsPcmVibration::OVRInput_HapticsPcmVibration(int32_t  SamplesCount, ::ArrayW<float_t>  Samples, float_t  SampleRateHz, bool  Append) noexcept  {
this->SamplesCount = SamplesCount;
this->Samples = Samples;
this->SampleRateHz = SampleRateHz;
this->Append = Append;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_HapticsPcmVibration::OVRInput_HapticsPcmVibration()   {
}
