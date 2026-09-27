#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/UpVectorType.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__UpVectorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::PoseDetection::UpVectorType::UpVectorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::UpVectorType::UpVectorType()   {
}
constexpr ::Oculus::Interaction::PoseDetection::UpVectorType  Oculus::Interaction::PoseDetection::UpVectorType::Head{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::PoseDetection::UpVectorType  Oculus::Interaction::PoseDetection::UpVectorType::Tracking{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::PoseDetection::UpVectorType  Oculus::Interaction::PoseDetection::UpVectorType::World{static_cast<int32_t>(0x2)};
