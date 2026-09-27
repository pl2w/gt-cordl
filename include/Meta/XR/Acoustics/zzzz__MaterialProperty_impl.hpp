#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MaterialProperty.hpp"
#include "Meta/XR/Acoustics/zzzz__MaterialProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::MaterialProperty::MaterialProperty(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::MaterialProperty::MaterialProperty()   {
}
constexpr ::Meta::XR::Acoustics::MaterialProperty  Meta::XR::Acoustics::MaterialProperty::ABSORPTION{static_cast<uint32_t>(0x0u)};
constexpr ::Meta::XR::Acoustics::MaterialProperty  Meta::XR::Acoustics::MaterialProperty::TRANSMISSION{static_cast<uint32_t>(0x1u)};
constexpr ::Meta::XR::Acoustics::MaterialProperty  Meta::XR::Acoustics::MaterialProperty::SCATTERING{static_cast<uint32_t>(0x2u)};
