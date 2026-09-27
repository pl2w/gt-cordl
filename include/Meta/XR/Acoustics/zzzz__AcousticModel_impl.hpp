#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/AcousticModel.hpp"
#include "Meta/XR/Acoustics/zzzz__AcousticModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::AcousticModel::AcousticModel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::AcousticModel::AcousticModel()   {
}
constexpr ::Meta::XR::Acoustics::AcousticModel  Meta::XR::Acoustics::AcousticModel::Automatic{static_cast<int32_t>(0xffffffff)};
constexpr ::Meta::XR::Acoustics::AcousticModel  Meta::XR::Acoustics::AcousticModel::None{static_cast<int32_t>(0x0)};
constexpr ::Meta::XR::Acoustics::AcousticModel  Meta::XR::Acoustics::AcousticModel::ShoeboxRoom{static_cast<int32_t>(0x1)};
constexpr ::Meta::XR::Acoustics::AcousticModel  Meta::XR::Acoustics::AcousticModel::AcousticRayTracing{static_cast<int32_t>(0x3)};
