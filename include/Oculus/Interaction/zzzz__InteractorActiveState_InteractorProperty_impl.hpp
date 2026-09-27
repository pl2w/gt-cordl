#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorActiveState_InteractorProperty.hpp"
#include "Oculus/Interaction/zzzz__InteractorActiveState_InteractorProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty::InteractorActiveState_InteractorProperty(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty::InteractorActiveState_InteractorProperty()   {
}
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty  GlobalNamespace::InteractorActiveState_InteractorProperty::HasCandidate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty  GlobalNamespace::InteractorActiveState_InteractorProperty::HasInteractable{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty  GlobalNamespace::InteractorActiveState_InteractorProperty::IsSelecting{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty  GlobalNamespace::InteractorActiveState_InteractorProperty::HasSelectedInteractable{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty  GlobalNamespace::InteractorActiveState_InteractorProperty::IsNormal{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty  GlobalNamespace::InteractorActiveState_InteractorProperty::IsHovering{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty  GlobalNamespace::InteractorActiveState_InteractorProperty::IsDisabled{static_cast<int32_t>(0x40)};
