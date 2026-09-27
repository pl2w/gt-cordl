#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerUnselectMode.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerUnselectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::GrabAPI::FingerUnselectMode::FingerUnselectMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::FingerUnselectMode::FingerUnselectMode()   {
}
constexpr ::Oculus::Interaction::GrabAPI::FingerUnselectMode  Oculus::Interaction::GrabAPI::FingerUnselectMode::AllReleased{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::GrabAPI::FingerUnselectMode  Oculus::Interaction::GrabAPI::FingerUnselectMode::AnyReleased{static_cast<int32_t>(0x1)};
