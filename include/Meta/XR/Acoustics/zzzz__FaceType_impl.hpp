#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/FaceType.hpp"
#include "Meta/XR/Acoustics/zzzz__FaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::FaceType::FaceType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::FaceType::FaceType()   {
}
constexpr ::Meta::XR::Acoustics::FaceType  Meta::XR::Acoustics::FaceType::TRIANGLES{static_cast<uint32_t>(0x0u)};
constexpr ::Meta::XR::Acoustics::FaceType  Meta::XR::Acoustics::FaceType::QUADS{static_cast<uint32_t>(0x1u)};
