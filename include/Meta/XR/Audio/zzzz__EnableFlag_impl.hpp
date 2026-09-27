#pragma once
// IWYU pragma private; include "Meta/XR/Audio/EnableFlag.hpp"
#include "Meta/XR/Audio/zzzz__EnableFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Audio::EnableFlag::EnableFlag(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Audio::EnableFlag::EnableFlag()   {
}
constexpr ::Meta::XR::Audio::EnableFlag  Meta::XR::Audio::EnableFlag::NONE{static_cast<uint32_t>(0x0u)};
constexpr ::Meta::XR::Audio::EnableFlag  Meta::XR::Audio::EnableFlag::SIMPLE_ROOM_MODELING{static_cast<uint32_t>(0x2u)};
constexpr ::Meta::XR::Audio::EnableFlag  Meta::XR::Audio::EnableFlag::LATE_REVERBERATION{static_cast<uint32_t>(0x3u)};
constexpr ::Meta::XR::Audio::EnableFlag  Meta::XR::Audio::EnableFlag::RANDOMIZE_REVERB{static_cast<uint32_t>(0x4u)};
constexpr ::Meta::XR::Audio::EnableFlag  Meta::XR::Audio::EnableFlag::PERFORMANCE_COUNTERS{static_cast<uint32_t>(0x5u)};
