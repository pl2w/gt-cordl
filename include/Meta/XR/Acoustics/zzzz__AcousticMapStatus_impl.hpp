#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/AcousticMapStatus.hpp"
#include "Meta/XR/Acoustics/zzzz__AcousticMapStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::AcousticMapStatus::AcousticMapStatus(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::AcousticMapStatus::AcousticMapStatus()   {
}
constexpr ::Meta::XR::Acoustics::AcousticMapStatus  Meta::XR::Acoustics::AcousticMapStatus::EMPTY{static_cast<uint32_t>(0x0u)};
constexpr ::Meta::XR::Acoustics::AcousticMapStatus  Meta::XR::Acoustics::AcousticMapStatus::MAPPED{static_cast<uint32_t>(0x1u)};
constexpr ::Meta::XR::Acoustics::AcousticMapStatus  Meta::XR::Acoustics::AcousticMapStatus::READY{static_cast<uint32_t>(0x3u)};
