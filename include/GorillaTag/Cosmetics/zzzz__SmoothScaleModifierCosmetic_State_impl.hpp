#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SmoothScaleModifierCosmetic_State.hpp"
#include "GorillaTag/Cosmetics/zzzz__SmoothScaleModifierCosmetic_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SmoothScaleModifierCosmetic_State::SmoothScaleModifierCosmetic_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothScaleModifierCosmetic_State::SmoothScaleModifierCosmetic_State()   {
}
constexpr ::GlobalNamespace::SmoothScaleModifierCosmetic_State  GlobalNamespace::SmoothScaleModifierCosmetic_State::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SmoothScaleModifierCosmetic_State  GlobalNamespace::SmoothScaleModifierCosmetic_State::Reset{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SmoothScaleModifierCosmetic_State  GlobalNamespace::SmoothScaleModifierCosmetic_State::Scaling{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SmoothScaleModifierCosmetic_State  GlobalNamespace::SmoothScaleModifierCosmetic_State::Scaled{static_cast<int32_t>(0x3)};
