#pragma once
// IWYU pragma private; include "UnityEngine/UI/Selectable_Transition.hpp"
#include "UnityEngine/UI/zzzz__Selectable_Transition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Selectable_Transition::Selectable_Transition(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Selectable_Transition::Selectable_Transition()   {
}
constexpr ::GlobalNamespace::Selectable_Transition  GlobalNamespace::Selectable_Transition::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Selectable_Transition  GlobalNamespace::Selectable_Transition::ColorTint{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Selectable_Transition  GlobalNamespace::Selectable_Transition::SpriteSwap{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Selectable_Transition  GlobalNamespace::Selectable_Transition::Animation{static_cast<int32_t>(0x3)};
