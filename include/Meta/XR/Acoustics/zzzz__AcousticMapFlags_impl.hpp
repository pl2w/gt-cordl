#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/AcousticMapFlags.hpp"
#include "Meta/XR/Acoustics/zzzz__AcousticMapFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::AcousticMapFlags::AcousticMapFlags(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::AcousticMapFlags::AcousticMapFlags()   {
}
constexpr ::Meta::XR::Acoustics::AcousticMapFlags  Meta::XR::Acoustics::AcousticMapFlags::NONE{static_cast<uint32_t>(0x0u)};
constexpr ::Meta::XR::Acoustics::AcousticMapFlags  Meta::XR::Acoustics::AcousticMapFlags::STATIC_ONLY{static_cast<uint32_t>(0x1u)};
constexpr ::Meta::XR::Acoustics::AcousticMapFlags  Meta::XR::Acoustics::AcousticMapFlags::NO_FLOATING{static_cast<uint32_t>(0x2u)};
constexpr ::Meta::XR::Acoustics::AcousticMapFlags  Meta::XR::Acoustics::AcousticMapFlags::MAP_ONLY{static_cast<uint32_t>(0x4u)};
constexpr ::Meta::XR::Acoustics::AcousticMapFlags  Meta::XR::Acoustics::AcousticMapFlags::DIFFRACTION{static_cast<uint32_t>(0x8u)};
