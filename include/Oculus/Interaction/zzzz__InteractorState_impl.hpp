#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorState.hpp"
#include "Oculus/Interaction/zzzz__InteractorState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::InteractorState::InteractorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractorState::InteractorState()   {
}
constexpr ::Oculus::Interaction::InteractorState  Oculus::Interaction::InteractorState::Normal{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::InteractorState  Oculus::Interaction::InteractorState::Hover{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::InteractorState  Oculus::Interaction::InteractorState::Select{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::InteractorState  Oculus::Interaction::InteractorState::Disabled{static_cast<int32_t>(0x3)};
