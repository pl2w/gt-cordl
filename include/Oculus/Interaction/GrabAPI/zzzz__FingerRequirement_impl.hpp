#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerRequirement.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerRequirement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::GrabAPI::FingerRequirement::FingerRequirement(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::FingerRequirement::FingerRequirement()   {
}
constexpr ::Oculus::Interaction::GrabAPI::FingerRequirement  Oculus::Interaction::GrabAPI::FingerRequirement::Ignored{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::GrabAPI::FingerRequirement  Oculus::Interaction::GrabAPI::FingerRequirement::Optional{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::GrabAPI::FingerRequirement  Oculus::Interaction::GrabAPI::FingerRequirement::Required{static_cast<int32_t>(0x2)};
