#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagger_StatusEffect.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_StatusEffect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect::GorillaTagger_StatusEffect(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect::GorillaTagger_StatusEffect()   {
}
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect  GlobalNamespace::GorillaTagger_StatusEffect::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect  GlobalNamespace::GorillaTagger_StatusEffect::Frozen{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect  GlobalNamespace::GorillaTagger_StatusEffect::Slowed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect  GlobalNamespace::GorillaTagger_StatusEffect::Dead{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect  GlobalNamespace::GorillaTagger_StatusEffect::Infected{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GorillaTagger_StatusEffect  GlobalNamespace::GorillaTagger_StatusEffect::It{static_cast<int32_t>(0x5)};
