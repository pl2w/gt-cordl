#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/ControlZoneProperty.hpp"
#include "Meta/XR/Acoustics/zzzz__ControlZoneProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::ControlZoneProperty::ControlZoneProperty(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::ControlZoneProperty::ControlZoneProperty()   {
}
constexpr ::Meta::XR::Acoustics::ControlZoneProperty  Meta::XR::Acoustics::ControlZoneProperty::RT60{static_cast<uint32_t>(0x0u)};
constexpr ::Meta::XR::Acoustics::ControlZoneProperty  Meta::XR::Acoustics::ControlZoneProperty::REVERB_LEVEL{static_cast<uint32_t>(0x1u)};
