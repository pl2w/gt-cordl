#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableState.hpp"
#include "Oculus/Interaction/zzzz__InteractableState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::InteractableState::InteractableState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableState::InteractableState()   {
}
constexpr ::Oculus::Interaction::InteractableState  Oculus::Interaction::InteractableState::Normal{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::InteractableState  Oculus::Interaction::InteractableState::Hover{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::InteractableState  Oculus::Interaction::InteractableState::Select{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::InteractableState  Oculus::Interaction::InteractableState::Disabled{static_cast<int32_t>(0x3)};
