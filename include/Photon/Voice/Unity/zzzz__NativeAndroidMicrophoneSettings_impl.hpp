#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/NativeAndroidMicrophoneSettings.hpp"
#include "Photon/Voice/Unity/zzzz__NativeAndroidMicrophoneSettings_def.hpp"
// Ctor Parameters [CppParam { name: "AcousticEchoCancellation", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AutomaticGainControl", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NoiseSuppression", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::Unity::NativeAndroidMicrophoneSettings::NativeAndroidMicrophoneSettings(bool  AcousticEchoCancellation, bool  AutomaticGainControl, bool  NoiseSuppression) noexcept  {
this->AcousticEchoCancellation = AcousticEchoCancellation;
this->AutomaticGainControl = AutomaticGainControl;
this->NoiseSuppression = NoiseSuppression;
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::NativeAndroidMicrophoneSettings::NativeAndroidMicrophoneSettings()   {
}
