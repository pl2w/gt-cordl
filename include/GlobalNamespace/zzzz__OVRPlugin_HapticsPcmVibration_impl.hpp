#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsPcmVibration.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HapticsPcmVibration_def.hpp"
// Ctor Parameters [CppParam { name: "BufferSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Append", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SamplesConsumed", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_HapticsPcmVibration::OVRPlugin_HapticsPcmVibration(uint32_t  BufferSize, ::System::IntPtr  Buffer, float_t  SampleRateHz, ::GlobalNamespace::OVRPlugin_Bool  Append, ::System::IntPtr  SamplesConsumed) noexcept  {
this->BufferSize = BufferSize;
this->Buffer = Buffer;
this->SampleRateHz = SampleRateHz;
this->Append = Append;
this->SamplesConsumed = SamplesConsumed;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_HapticsPcmVibration::OVRPlugin_HapticsPcmVibration()   {
}
