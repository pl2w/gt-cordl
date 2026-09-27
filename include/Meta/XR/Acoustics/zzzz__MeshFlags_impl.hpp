#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MeshFlags.hpp"
#include "Meta/XR/Acoustics/zzzz__MeshFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::MeshFlags::MeshFlags(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::MeshFlags::MeshFlags()   {
}
constexpr ::Meta::XR::Acoustics::MeshFlags  Meta::XR::Acoustics::MeshFlags::NONE{static_cast<uint32_t>(0x0u)};
constexpr ::Meta::XR::Acoustics::MeshFlags  Meta::XR::Acoustics::MeshFlags::ENABLE_SIMPLIFICATION{static_cast<uint32_t>(0x1u)};
constexpr ::Meta::XR::Acoustics::MeshFlags  Meta::XR::Acoustics::MeshFlags::ENABLE_DIFFRACTION{static_cast<uint32_t>(0x2u)};
