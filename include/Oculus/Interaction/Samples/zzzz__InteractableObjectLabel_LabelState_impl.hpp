#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/InteractableObjectLabel_LabelState.hpp"
#include "Oculus/Interaction/Samples/zzzz__InteractableObjectLabel_LabelState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InteractableObjectLabel_LabelState::InteractableObjectLabel_LabelState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InteractableObjectLabel_LabelState::InteractableObjectLabel_LabelState()   {
}
constexpr ::GlobalNamespace::InteractableObjectLabel_LabelState  GlobalNamespace::InteractableObjectLabel_LabelState::Hidden{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InteractableObjectLabel_LabelState  GlobalNamespace::InteractableObjectLabel_LabelState::FocusCheck{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InteractableObjectLabel_LabelState  GlobalNamespace::InteractableObjectLabel_LabelState::Focused{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InteractableObjectLabel_LabelState  GlobalNamespace::InteractableObjectLabel_LabelState::HideCheck{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::InteractableObjectLabel_LabelState  GlobalNamespace::InteractableObjectLabel_LabelState::Used{static_cast<int32_t>(0x4)};
