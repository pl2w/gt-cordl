#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeature.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature::TransformFeature(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature::TransformFeature()   {
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature  Oculus::Interaction::PoseDetection::TransformFeature::WristUp{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature  Oculus::Interaction::PoseDetection::TransformFeature::WristDown{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature  Oculus::Interaction::PoseDetection::TransformFeature::PalmDown{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature  Oculus::Interaction::PoseDetection::TransformFeature::PalmUp{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature  Oculus::Interaction::PoseDetection::TransformFeature::PalmTowardsFace{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature  Oculus::Interaction::PoseDetection::TransformFeature::PalmAwayFromFace{static_cast<int32_t>(0x5)};
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature  Oculus::Interaction::PoseDetection::TransformFeature::FingersUp{static_cast<int32_t>(0x6)};
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature  Oculus::Interaction::PoseDetection::TransformFeature::FingersDown{static_cast<int32_t>(0x7)};
constexpr ::Oculus::Interaction::PoseDetection::TransformFeature  Oculus::Interaction::PoseDetection::TransformFeature::PinchClear{static_cast<int32_t>(0x8)};
