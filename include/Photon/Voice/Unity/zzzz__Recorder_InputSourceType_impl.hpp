#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Recorder_InputSourceType.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_InputSourceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Recorder_InputSourceType::Recorder_InputSourceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Recorder_InputSourceType::Recorder_InputSourceType()   {
}
constexpr ::GlobalNamespace::Recorder_InputSourceType  GlobalNamespace::Recorder_InputSourceType::Microphone{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Recorder_InputSourceType  GlobalNamespace::Recorder_InputSourceType::AudioClip{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Recorder_InputSourceType  GlobalNamespace::Recorder_InputSourceType::Factory{static_cast<int32_t>(0x2)};
