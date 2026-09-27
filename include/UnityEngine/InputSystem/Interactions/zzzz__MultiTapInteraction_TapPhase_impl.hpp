#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Interactions/MultiTapInteraction_TapPhase.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__MultiTapInteraction_TapPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MultiTapInteraction_TapPhase::MultiTapInteraction_TapPhase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiTapInteraction_TapPhase::MultiTapInteraction_TapPhase()   {
}
constexpr ::GlobalNamespace::MultiTapInteraction_TapPhase  GlobalNamespace::MultiTapInteraction_TapPhase::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MultiTapInteraction_TapPhase  GlobalNamespace::MultiTapInteraction_TapPhase::WaitingForNextRelease{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MultiTapInteraction_TapPhase  GlobalNamespace::MultiTapInteraction_TapPhase::WaitingForNextPress{static_cast<int32_t>(0x2)};
