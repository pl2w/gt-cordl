#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/EnableFlagInternal.hpp"
#include "Meta/XR/Acoustics/zzzz__EnableFlagInternal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::EnableFlagInternal::EnableFlagInternal(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::EnableFlagInternal::EnableFlagInternal()   {
}
constexpr ::Meta::XR::Acoustics::EnableFlagInternal  Meta::XR::Acoustics::EnableFlagInternal::NONE{static_cast<uint32_t>(0x0u)};
constexpr ::Meta::XR::Acoustics::EnableFlagInternal  Meta::XR::Acoustics::EnableFlagInternal::SIMPLE_ROOM_MODELING{static_cast<uint32_t>(0x2u)};
constexpr ::Meta::XR::Acoustics::EnableFlagInternal  Meta::XR::Acoustics::EnableFlagInternal::LATE_REVERBERATION{static_cast<uint32_t>(0x3u)};
constexpr ::Meta::XR::Acoustics::EnableFlagInternal  Meta::XR::Acoustics::EnableFlagInternal::RANDOMIZE_REVERB{static_cast<uint32_t>(0x4u)};
constexpr ::Meta::XR::Acoustics::EnableFlagInternal  Meta::XR::Acoustics::EnableFlagInternal::PERFORMANCE_COUNTERS{static_cast<uint32_t>(0x5u)};
constexpr ::Meta::XR::Acoustics::EnableFlagInternal  Meta::XR::Acoustics::EnableFlagInternal::DIFFRACTION{static_cast<uint32_t>(0x6u)};
