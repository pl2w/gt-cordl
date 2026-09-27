#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsAmplitudeEnvelopeVibration.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HapticsAmplitudeEnvelopeVibration_def.hpp"
// Ctor Parameters [CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AmplitudeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Amplitudes", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration::OVRPlugin_HapticsAmplitudeEnvelopeVibration(float_t  Duration, uint32_t  AmplitudeCount, ::System::IntPtr  Amplitudes) noexcept  {
this->Duration = Duration;
this->AmplitudeCount = AmplitudeCount;
this->Amplitudes = Amplitudes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration::OVRPlugin_HapticsAmplitudeEnvelopeVibration()   {
}
