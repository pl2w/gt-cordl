#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/PoseOrigin.hpp"
#include "Oculus/Interaction/Input/zzzz__PoseOrigin_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::PoseOrigin::PoseOrigin(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::PoseOrigin::PoseOrigin()   {
}
constexpr ::Oculus::Interaction::Input::PoseOrigin  Oculus::Interaction::Input::PoseOrigin::None{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Input::PoseOrigin  Oculus::Interaction::Input::PoseOrigin::RawTrackedPose{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::Input::PoseOrigin  Oculus::Interaction::Input::PoseOrigin::FilteredTrackedPose{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::Input::PoseOrigin  Oculus::Interaction::Input::PoseOrigin::SyntheticPose{static_cast<int32_t>(0x3)};
