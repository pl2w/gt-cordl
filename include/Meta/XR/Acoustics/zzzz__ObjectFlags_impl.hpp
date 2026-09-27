#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/ObjectFlags.hpp"
#include "Meta/XR/Acoustics/zzzz__ObjectFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::ObjectFlags::ObjectFlags(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::ObjectFlags::ObjectFlags()   {
}
constexpr ::Meta::XR::Acoustics::ObjectFlags  Meta::XR::Acoustics::ObjectFlags::EMPTY{static_cast<uint32_t>(0x0u)};
constexpr ::Meta::XR::Acoustics::ObjectFlags  Meta::XR::Acoustics::ObjectFlags::ENABLED{static_cast<uint32_t>(0x1u)};
constexpr ::Meta::XR::Acoustics::ObjectFlags  Meta::XR::Acoustics::ObjectFlags::STATIC{static_cast<uint32_t>(0x2u)};
