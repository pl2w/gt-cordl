#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/DistributionType.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__DistributionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType::DistributionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType::DistributionType()   {
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType  Meta::XR::MRUtilityKit::SceneDecorator::DistributionType::GRID{static_cast<int32_t>(0x0)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType  Meta::XR::MRUtilityKit::SceneDecorator::DistributionType::SIMPLEX{static_cast<int32_t>(0x1)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType  Meta::XR::MRUtilityKit::SceneDecorator::DistributionType::STAGGERED_CONCENTRIC{static_cast<int32_t>(0x2)};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType  Meta::XR::MRUtilityKit::SceneDecorator::DistributionType::RANDOM{static_cast<int32_t>(0x3)};
