#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsBuffer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HapticsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "Samples", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_HapticsBuffer::OVRPlugin_HapticsBuffer(::System::IntPtr  Samples, int32_t  SamplesCount) noexcept  {
this->Samples = Samples;
this->SamplesCount = SamplesCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_HapticsBuffer::OVRPlugin_HapticsBuffer()   {
}
